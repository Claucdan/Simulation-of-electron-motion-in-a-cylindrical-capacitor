#ifndef SIMULATION_CHARTFORYX_H
#define SIMULATION_CHARTFORYX_H

#include <IGraphicsObject.h>
#include <Models/Model.h>
#include <vector>

namespace graphicsObjects {

    class ChartForYx : public IGraphicsObject {
    private:
        Model* _model;
        double _scaleX;
        double _scaleY;
        std::vector<coordination> points;

        void DrawPoints();

    public:
        ChartForYx(double r, double R, double L, Model* model) : _model(model) {
            _scaleX = 0.3f/(L*0.01f);
            _scaleY = 0.3f/((R-r)*0.01f);
        };
        void DrawInWindow() override;
    };

} // charts

#endif //SIMULATION_CHARTFORYX_H
