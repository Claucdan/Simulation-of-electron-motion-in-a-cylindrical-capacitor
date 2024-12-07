#include <windows.h>
#include <WindowGraphic.h>
#include "Charts/Xy/ChartForYx.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int nCmdShow) {
    graphics::Window window(hInst, hPrevInst, args);
    window.Show(nCmdShow);
    graphicsObjects::GraphicsObject* object = new graphicsObjects::ChartForYx();

    while (window.IsShowed()){
        window.ReactToMessage();
        window.DrawObject(object);
    }
    window.Stop();
    return 0;
}
