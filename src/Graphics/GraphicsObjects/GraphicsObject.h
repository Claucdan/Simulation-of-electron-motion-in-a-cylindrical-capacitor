#ifndef SIMULATION_GRAPHICSOBJECT_H
#define SIMULATION_GRAPHICSOBJECT_H

#include "WindowGraphic.h"

namespace graphics {

    class GraphicsObject {
    public:
        virtual void DrawInWindow() = 0;
    };

} // graphics

#endif //SIMULATION_GRAPHICSOBJECT_H
