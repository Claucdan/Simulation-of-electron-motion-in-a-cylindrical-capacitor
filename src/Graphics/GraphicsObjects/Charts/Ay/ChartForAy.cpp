#include "ChartForAy.h"

namespace graphicsObjects {
    void ChartForAy::DrawInWindow() {
        float x1 = 0.45f,y1 = 0.2f;
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

    void ChartForAy::DrawPoints() {
        if(time++<500 && _model->SpeedVy() != 0)
            points.push_back({(float)time, 0.35f});
        glColor3f(1.0f, 1.0f, 0.0f);
        glPointSize(1.0f);
        for(auto i:points){
            glBegin(GL_POINTS);
            glVertex2f(i._x * (0.3f/450) + 0.45f,i._y);
            glEnd();
        }
    }
} // graphicsobjects