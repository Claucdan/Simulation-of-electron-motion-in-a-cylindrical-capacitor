#ifndef SIMULATION_MODEL_H
#define SIMULATION_MODEL_H

#include <IGraphicsObject.h>

#define dt 0.0000000002


namespace graphicsObjects {

    struct coordination{
        double _x;
        double _y;
    };

    class Model : public IGraphicsObject {
    private:
        double _speedOfElectronByX;
        double _speedOfElectionByY;
        double _accelerationByY = 0;
        double _timeFromStart = 0;

        double _x;
        double _y;
        double _h;
        double _scaleY;
        double _scaleX;

    protected:
        void DrawElectron();
        void DrawCapacitor();

        void LogicOfElectron();
    public:
        Model(double r, double R, double L, double startSpeed);
        coordination GetCoordinate();
        double SpeedVy();
        void DrawInWindow() override;
    };

} // graphicsOnjects

#endif //SIMULATION_MODEL_H
