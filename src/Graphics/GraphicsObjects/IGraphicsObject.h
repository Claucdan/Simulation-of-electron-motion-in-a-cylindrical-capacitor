#ifndef SIMULATION_IGRAPHICSOBJECT_H
#define SIMULATION_IGRAPHICSOBJECT_H

#include <gl/gl.h>

namespace graphicsObjects {

    class IGraphicsObject {
    public:
        virtual void Configure() = 0;
        virtual void DrawInWindow() = 0;
    };

} // graphics

#endif //SIMULATION_IGRAPHICSOBJECT_H
