#include <windows.h>
#include <WindowGraphic.h>
#include <ChartForAy.h>
#include <ChartForYx.h>
#include <ChartForYt.h>
#include <ChartForVy.h>
#include <Models/Model.h>

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int nCmdShow) {
    graphics::Window window(hInst, hPrevInst, args);
    window.Show(1);
    auto** object = new graphicsObjects::IGraphicsObject*[5];
    double r = 5.5f,
           R = 12,
           L = 20,
           speed = 4000000;
    graphicsObjects::Model* model = new graphicsObjects::Model(r, R, L, speed);
    object[0] = model;
    object[1] = new graphicsObjects::ChartForYx(r,R,L,model);
    object[2] = new graphicsObjects::ChartForVy(model);
    object[3] = new graphicsObjects::ChartForAy(model);
    object[4] = new graphicsObjects::ChartForYt(r,R,model);



    while (window.IsShowed()){
        window.DrawListOfObjects(object, 5);
        window.ReactToMessage();
    }
    window.Stop();
    return 0;
}
