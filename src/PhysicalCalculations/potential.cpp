#include "potential.h"

namespace calculation {

    double MinimumPotential(double r, double R, double speed, double L){
        double qOfElectron = 1.602f,
              massOfElectron = 9.109f;
        return ((R-r)*(R-r)*speed*speed*massOfElectron)/(qOfElectron*L*L);
    }

} // calculation