#include "ChartForYt.h"

namespace graphicsObjects {
    void ChartForYt::DrawInWindow() {
        float x1 = 0.45f,y1 = -0.6f;
        float x2 = x1,y2 = y1+0.4f;

        glBegin(GL_LINES);
        glVertex2f(x1,y1);
        glVertex2f(x2,y2);
        glEnd();

        float x3 = x1+0.4f,y3 = y1;

        glBegin(GL_LINES);
        glVertex2f(x1,y1);
        glVertex2f(x3,y3);
        glEnd();    }
    void ChartForYt::Configure() {
        glColor3f(0.0f, 0.0f, 0.0f);
        glLineWidth(2.0f);
    }
} // graphicsObjects