#ifndef SIMULATION_CHARTFORYX_H
#define SIMULATION_CHARTFORYX_H

#include "GraphicsObject.h"
#include <GL/gl.h>

namespace graphicsObjects {

    class ChartForYx : public GraphicsObject {
    public:
        void Configure() override;
        void DrawInWindow() override;
    };

} // charts

#endif //SIMULATION_CHARTFORYX_H
