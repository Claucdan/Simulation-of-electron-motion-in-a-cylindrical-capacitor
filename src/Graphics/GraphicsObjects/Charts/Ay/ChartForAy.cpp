//
// Created by dania on 07.12.2024.
//

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
    }
} // graphicsobjects