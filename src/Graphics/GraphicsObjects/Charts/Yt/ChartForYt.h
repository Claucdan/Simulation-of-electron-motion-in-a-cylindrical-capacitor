#ifndef SIMULATION_CHARTFORYT_H
#define SIMULATION_CHARTFORYT_H

#include <IGraphicsObject.h>
#include <Models/Model.h>
#include <vector>

namespace graphicsObjects {

    class ChartForYt : public IGraphicsObject {
    private:
        Model* _model;
        double _scaleT;
        double _scaleY;
        std::vector<coordination> points;
        double time = 0;

        void DrawPoints();


    public:
        ChartForYt(double r, double R, Model* model) : _model(model) {
            _scaleY = 0.6f/((R-r)*0.01f);
            _scaleT = 0.3f/450;
        };
        void DrawInWindow() override;
    };

} // graphicsObjects

#endif //SIMULATION_CHARTFORYT_H
