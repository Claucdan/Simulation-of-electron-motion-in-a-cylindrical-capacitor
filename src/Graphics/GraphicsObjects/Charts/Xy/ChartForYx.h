#ifndef SIMULATION_CHARTFORYX_H
#define SIMULATION_CHARTFORYX_H

#include "IGraphicsObject.h"

namespace graphicsObjects {

    class ChartForYx : public IGraphicsObject {
    public:
        void Configure() override;
        void DrawInWindow() override;
    };

} // charts

#endif //SIMULATION_CHARTFORYX_H
