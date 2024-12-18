#ifndef SIMULATION_WINDOWGRAPHIC_H
#define SIMULATION_WINDOWGRAPHIC_H

#include <windows.h>
#include <IGraphicsObject.h>
#include <gl/GL.h>

namespace graphics{

    class Window{
    private:
        WNDCLASSW _window;
        MSG _msg = {0};
        HDC _hdc;
        HGLRC _hglrc;
        HWND _hwnd;

        bool _isShowed = false;
    protected:
        WNDCLASSW NewWindow(HBRUSH BGColor, HCURSOR Cursor, HINSTANCE hInst, HICON Icon, LPCWSTR Name, WNDPROC Proced);
        void EnableOpenGL(HWND hwnd, HDC* hdc, HGLRC* hRC);
        void DisableOpenGL(HWND hwnd, HDC hDC, HGLRC hRC);


    public:
        Window(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args);
        void Show(int nCmdShow);
        void ReactToMessage();
        bool IsShowed();
        void DrawObject(graphicsObjects::IGraphicsObject* object);
        void DrawListOfObjects(graphicsObjects::IGraphicsObject** start, size_t countOfObjects);
        void Stop();

    };


}

#endif //SIMULATION_WINDOWGRAPHIC_H
