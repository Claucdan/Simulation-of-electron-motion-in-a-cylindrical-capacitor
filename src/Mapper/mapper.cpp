#include <windows.h>
#include <WindowGraphic.h>
#include <ChartForAy.h>
#include <ChartForYx.h>
#include <ChartForYt.h>
#include <ChartForVy.h>

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int nCmdShow) {
    graphics::Window window(hInst, hPrevInst, args);
    window.Show(nCmdShow);
    auto** object = new graphicsObjects::IGraphicsObject*[4];
    object[0] = new graphicsObjects::ChartForYx();
    object[1] = new graphicsObjects::ChartForVy();
    object[2] = new graphicsObjects::ChartForAy();
    object[3] = new graphicsObjects::ChartForYt();


    while (window.IsShowed()){
        window.DrawListOfObjects(object, 4);
        window.ReactToMessage();
    }
    window.Stop();
    return 0;
}
