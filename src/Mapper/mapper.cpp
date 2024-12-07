#include <windows.h>
#include "WindowGraphic.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int nCmdShow) {
    graphics::Window window(hInst, hPrevInst, args);
    window.Show(nCmdShow);
    while (window.IsShowed()){
        window.ReactToMessage();
    }
    window.Stop();
    return 0;
}
