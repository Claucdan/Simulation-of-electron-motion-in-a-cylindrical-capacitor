#include "Model.h"
#include <potential.h>

namespace graphicsObjects {
    void Model::DrawInWindow() {
        DrawCapacitor();
        DrawElectron();
        LogicOfElectron();
    }

    void  Model::DrawCapacitor() {
        float x1 = -0.8f,y1 = -0.6f;
        float x2 = x1 + 1.0f,y2 = y1;

        glColor3f(1.0f, 0.1f, 0.1f);
        glLineWidth(2.0f);

        glBegin(GL_LINES);
            glVertex2f(x1,y1);
            glVertex2f(x2,y2);
        glEnd();

        float x3 = x1, y3 = y1 + 0.4f;
        float x4 = x2, y4 = y3;

        glBegin(GL_LINES);
            glVertex2f(x3,y3);
            glVertex2f(x4,y4);
        glEnd();
    }

    void Model::DrawElectron() {
        glColor3f(0.0f, 1.0f, 1.0f);
        glPointSize(5.0f);
        glBegin(GL_POINTS);
            glVertex2f(_x*_scaleX - 0.8f,_y*_scaleY - 0.6f);
        glEnd();
    }

    Model::Model(double r, double R, double L, double startSpeed) {
        _h = (R-r)*0.01f;
        _scaleY = 0.4f/((R-r)*0.01);
        _scaleX = 1/(L*0.01f);
        _x = 0;
        _y = ((R-r)*0.01f)/2;
        _speedOfElectronByX = startSpeed;
        _speedOfElectionByY = 0;
        double dV = calculation::MinimumPotential(r, R, startSpeed*0.000001, L);
        _accelerationByY = ((1.602f)*dV)/((9.109f)*_h)*(1000000000000);
    }

    void Model::LogicOfElectron() {
        if(_y>0) {
            _x += _speedOfElectronByX * dt;
            _speedOfElectionByY += _accelerationByY * dt;
            _y -= _speedOfElectionByY * dt;
        }
        else {
            _speedOfElectionByY = 0;
            _accelerationByY = 0;
        }
    }

    coordination Model::GetCoordinate() {
        return {_x, _y};
    }

    double Model::SpeedVy() {
        return _speedOfElectionByY;
    }
} // graphicsOnjects