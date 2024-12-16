#ifndef SIMULATION_CHARTFORAY_H
#define SIMULATION_CHARTFORAY_H

#include <IGraphicsObject.h>
#include <Models/Model.h>
#include <vector>

namespace graphicsObjects {

    class ChartForAy : public IGraphicsObject{
    private:
        Model* _model;
        int time = 0;
        std::vector<coordination> points;

        void DrawPoints();

    public:
        ChartForAy(Model* model) : _model(model) { };
        void DrawInWindow() override;
    };

} // graphicsobjects

#endif //SIMULATION_CHARTFORAY_H
