#ifndef SIMULATION_CHARTSFORVY_H
#define SIMULATION_CHARTSFORVY_H

#include <IGraphicsObject.h>
#include <Models/Model.h>
#include <vector>

namespace graphicsObjects {

    class ChartForVy : public IGraphicsObject{
    private:
        Model* _model;
        double _scaleV;
        double _scaleT;
        std::vector<coordination> points;
        double time = 0;

        void DrawPoints();
    public:
        ChartForVy(Model* model) : _model(model) {
            _scaleV = 0.3f/2000000;
            _scaleT = 0.3f/300;
        };
        void DrawInWindow() override;
    };

} // graphicsObjects

#endif //SIMULATION_CHARTSFORVY_H
