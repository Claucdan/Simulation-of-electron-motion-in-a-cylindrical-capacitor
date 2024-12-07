#ifndef SIMULATION_GRAPHICSOBJECT_H
#define SIMULATION_GRAPHICSOBJECT_H

namespace graphicsObjects {

    class GraphicsObject {
    public:
        virtual void DrawInWindow() = 0;
    };

} // graphics

#endif //SIMULATION_GRAPHICSOBJECT_H
