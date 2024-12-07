#ifndef SIMULATION_CHARTFORYT_H
#define SIMULATION_CHARTFORYT_H

#include <IGraphicsObject.h>

namespace graphicsObjects {

    class ChartForYt : public IGraphicsObject {
    public:
        void Configure() override;
        void DrawInWindow() override;
    };

} // graphicsObjects

#endif //SIMULATION_CHARTFORYT_H
