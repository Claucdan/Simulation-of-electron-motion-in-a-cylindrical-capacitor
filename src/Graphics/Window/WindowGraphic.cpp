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
    _isShowed = true;
}

void graphics::Window::Stop() {
    if(_isShowed)
        DestroyWindow(_hwnd);
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

void graphics::Window::DrawObject(graphics::GraphicsObject *object) {
    if(_isShowed && _openGLEnable)
        object->DrawInWindow();
}

void graphics::Window::DrawListOfObjects(graphics::GraphicsObject **start, size_t countOfObjects) {
    GraphicsObject** pObject = start;
    for(size_t i = 0; i < countOfObjects; ++i){
        (*pObject)->DrawInWindow();
    }
}
