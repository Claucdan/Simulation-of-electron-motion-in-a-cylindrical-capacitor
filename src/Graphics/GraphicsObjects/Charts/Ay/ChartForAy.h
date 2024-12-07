#ifndef SIMULATION_CHARTFORAY_H
#define SIMULATION_CHARTFORAY_H

#include <IGraphicsObject.h>

namespace graphicsObjects {

    class ChartForAy : public IGraphicsObject{
        void Configure() override;
        void DrawInWindow() override;
    };

} // graphicsobjects

#endif //SIMULATION_CHARTFORAY_H
