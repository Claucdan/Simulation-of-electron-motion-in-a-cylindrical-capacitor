#ifndef SIMULATION_WINDOWGRAPHIC_H
#define SIMULATION_WINDOWGRAPHIC_H

#include <windows.h>
#include "GraphicsObject.h"
#include <iterator>

namespace graphics{

    class Window{
    private:
        WNDCLASSW _window;
        MSG _msg = {0};
        HDC _hdc;
        HGLRC _hglrc;
        HWND _hwnd;

        bool _isShowed = false;
        bool _openGLEnable = false;
    protected:
        WNDCLASSW NewWindow(HBRUSH BGColor, HCURSOR Cursor, HINSTANCE hInst, HICON Icon, LPCWSTR Name, WNDPROC Proced);


    public:
        Window(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args);
        void Show(int nCmdShow);
        void ReactToMessage();
        bool IsShowed();
        void DrawObject(GraphicsObject* object);
        void DrawListOfObjects(GraphicsObject** start, size_t countOfObjects);
        void Stop();

    };


}

#endif //SIMULATION_WINDOWGRAPHIC_H
