#include "WindowGraphic.h"


LRESULT CALLBACK ProcedureOfWin(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp){
    switch (msg)
    {
        case WM_CREATE:
            return 0;
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hWnd, msg, wp, lp);
    }
    return DefWindowProc(hWnd, msg, wp, lp);
}

graphics::Window::Window(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args) {
    _window = NewWindow((HBRUSH)COLOR_WINDOW,
                        LoadCursor(NULL,IDC_ARROW),
                        hInst,
                        LoadIcon(NULL,IDI_QUESTION),
                        L"MODELING",
                        ProcedureOfWin);
    _hwnd = CreateWindowW(
            L"MODELING",
            (WCHAR*)"Modeling",
            WS_OVERLAPPEDWINDOW | WS_VISIBLE,
            200,
            200,
            600,
            600,
            NULL,
            NULL,
            NULL,
            NULL);
}

WNDCLASSW graphics::Window::NewWindow(HBRUSH BGColor, HCURSOR Cursor, HINSTANCE hInst, HICON Icon, LPCWSTR Name, WNDPROC Proced) {
    WNDCLASSW tmp = { 0 };

    tmp.hbrBackground = BGColor;
    tmp.hCursor = Cursor;
    tmp.hInstance = hInst;
    tmp.hIcon = Icon;
    tmp.lpszClassName = Name;
    tmp.lpfnWndProc = Proced;

    RegisterClassW(&tmp);

    return tmp;
}

void graphics::Window::Show(int nCmdShow) {
    ShowWindow(_hwnd, nCmdShow);
    EnableOpenGL(_hwnd, &_hdc, &_hglrc);
    _isShowed = true;
}

void graphics::Window::Stop() {
    if(_isShowed) {
        DisableOpenGL(_hwnd, _hdc, _hglrc);
        DestroyWindow(_hwnd);
    }
    _isShowed = false;
}

bool graphics::Window::IsShowed() {
    return _isShowed;
}

void graphics::Window::ReactToMessage() {
    if(PeekMessageW(&_msg, NULL, 0 , 0, PM_REMOVE)){
        if(_msg.message == WM_QUIT){
            Stop();
            _isShowed = false;
        }
        else{
            TranslateMessage(&_msg);
            DispatchMessageW(&_msg);
        }
    }
}

void graphics::Window::DrawObject(graphicsObjects::IGraphicsObject *object) {
    if(!_isShowed)
        return;

    glClearColor(0.5f, 0.5f, 0.5f, 0.5f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    object->Configure();
    glPushMatrix();
        object->DrawInWindow();
    glPopMatrix();
    SwapBuffers(_hdc);
}

void graphics::Window::DrawListOfObjects(graphicsObjects::IGraphicsObject **start, size_t countOfObjects) {
    graphicsObjects::IGraphicsObject** pObject = start;
    glClearColor(0.5f, 0.5f, 0.5f, 0.5f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    for(size_t i = 0; i < countOfObjects; ++i){
        glPushMatrix();
            (*pObject)->Configure();
            (*pObject)->DrawInWindow();
        glPopMatrix();
        ++pObject;
    }
    SwapBuffers(_hdc);
}

void graphics::Window::EnableOpenGL(HWND hwnd, HDC *hdc, HGLRC *hRC) {
    PIXELFORMATDESCRIPTOR pfd;

    int iFormat;

/* get the device context (DC) */
    *hdc = GetDC(hwnd);

/* set the pixel format for the DC */
    ZeroMemory(&pfd, sizeof(pfd));

    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW |
                  PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 24;
    pfd.cDepthBits = 16;
    pfd.iLayerType = PFD_MAIN_PLANE;

    iFormat = ChoosePixelFormat(*hdc, &pfd);

    SetPixelFormat(*hdc, iFormat, &pfd);

/* create and enable the render context (RC) */
    *hRC = wglCreateContext(*hdc);

    wglMakeCurrent(*hdc, *hRC);
}

void graphics::Window::DisableOpenGL(HWND hwnd, HDC hDC, HGLRC hRC) {
    wglMakeCurrent(NULL, NULL);
    wglDeleteContext(hRC);
    ReleaseDC(hwnd, hDC);
}
