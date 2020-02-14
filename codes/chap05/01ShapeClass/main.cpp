#include <Graph2D.h>
#include "Shape.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Donet.h"

using namespace graph;

CDonut myDonet(0.5, 100, 100, CPoint2D(400, 450), "This is a donut!");
CEllipse myEllipse(100, 50, CPoint2D(200, 200), "This is an ellipse!", 0xFFFF00);
CRectangle myRect(200, 150, CPoint2D(600, 200), "This is a rectangle!", 0x00FFFF, 0xFF0000);

void display(void)
{
    myDonet.Draw();
    myEllipse.Draw();
    myRect.Draw();
}

void mouse(int button, int x, int y)
{

}

void mouseMove(int x, int y)
{

}

void specialKey(int key)
{
    switch (key)
    {
    case GLUT_KEY_UP:
        myDonet.Translate(0, 10);
        myEllipse.Translate(0, 10);
        myRect.Translate(0, 10);
        break;
    case GLUT_KEY_DOWN:
        myDonet.Translate(0, -10);
        myEllipse.Translate(0, -10);
        myRect.Translate(0, -10);
        break;
    case GLUT_KEY_LEFT:
        myDonet.Translate(-10, 0);
        myEllipse.Translate(-10, 0);
        myRect.Translate(-10, 0);
        break;
    case GLUT_KEY_RIGHT:
        myDonet.Translate(10, 0);
        myEllipse.Translate(10, 0);
        myRect.Translate(10, 0);
        break;
    default:
        break;
    }
}

void keyboard(unsigned char key)
{
    switch (key)
    {
    case 27 :
    case 'q':
        exit(0);
        break;
    default:
        break;
    }
}

int main(int argc, char *argv[])
{
    myDonet.ShowPos();
    myEllipse.ShowPos();
    myRect.ShowPos();
    initGraph(display, keyboard, mouse, mouseMove, specialKey);
    return 0;
}
