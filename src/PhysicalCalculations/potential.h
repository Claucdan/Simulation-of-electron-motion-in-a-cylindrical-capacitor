#ifndef SIMULATION_OF_ELECTRON_MOTION_IN_A_CYLINDRICAL_CAPACITOR_POTENTION_H
#define SIMULATION_OF_ELECTRON_MOTION_IN_A_CYLINDRICAL_CAPACITOR_POTENTION_H

namespace calculation {

    /**
     * Calculates the minimum potential difference so that the electron does not pass through the cylindrical capacitor
     * @param r Radius of inside circle in [cm]
     * @param R Radius of outside circle in [cm]
     * @param speed Speed of electron in [m/c * 10^(-6)]
     * @param L Length of capacitor in [cm]
     * @return Minimal potential difference in [V]
     */
    double MinimumPotential(double r, double R, double speed, double L);

} // calculation

#endif //SIMULATION_OF_ELECTRON_MOTION_IN_A_CYLINDRICAL_CAPACITOR_POTENTION_H
