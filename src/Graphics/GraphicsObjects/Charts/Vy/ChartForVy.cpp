#include "ChartForVy.h"

namespace graphicsObjects {
    void ChartForVy::DrawInWindow() {
        float x1 = -0.15f,y1 = 0.2f;
        float x2 = x1,y2 = y1+0.4f;

        glColor3f(0.0f, 0.0f, 0.0f);
        glLineWidth(2.0f);

        glBegin(GL_LINES);
            glVertex2f(x1,y1);
            glVertex2f(x2,y2);
        glEnd();

        float x3 = x1+0.4f,y3 = y1;

        glBegin(GL_LINES);
            glVertex2f(x1,y1);
            glVertex2f(x3,y3);
        glEnd();

        DrawPoints();
    }

    void ChartForVy::DrawPoints() {
        if(time<380) {
            points.push_back({time++, _model->SpeedVy()});
        }
        glColor3f(1.0f, 1.0f, 0.0f);
        glPointSize(1.0f);
        for(auto i:points){
            glBegin(GL_POINTS);
            glVertex2f(i._x*_scaleT - 0.15f,i._y*_scaleV + 0.2f);
            glEnd();
        }

    }
} // graphicsObjects