#ifndef SIMULATION_CHARTSFORVY_H
#define SIMULATION_CHARTSFORVY_H

#include <IGraphicsObject.h>


namespace graphicsObjects {

    class ChartForVy : public IGraphicsObject{
        void Configure() override;
        void DrawInWindow() override;
    };

} // graphicsObjects

#endif //SIMULATION_CHARTSFORVY_H
