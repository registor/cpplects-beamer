#include "ShapeArr.h"

CShapeArr shapeArr;

void display()
{
    shapeArr.Draw();
}

void keyboard(unsigned char key)
{
    switch (key)
    {
    case 'w':
        shapeArr.Translate(0,10);
        break;
    case 's':
        shapeArr.Translate(0,-10);
        break;
    case 'a':
        shapeArr.Translate(-10,0);
        break;
    case 'd':
        shapeArr.Translate(10,0);
        break;
    case 'z':
        shapeArr.Scale(1.01);
        break;
    case 'x':
        shapeArr.Scale(0.99);
        break;
    default:
        break;
    }
}

/*
Rectangle 800 400 400 400 sky 0xC0E8F2 0x000000
Rectangle 800 200 400 100 earth 0xB8BD95 0x000000
Donut 0.5 80 60 474 490 rooftop 0x814000 0x000000
Rectangle 30 100 407 354 chimney 0x8C1926 0x000000
Ellipse 15 15 403 425 smoke1 0xFFEEEE 0x000000
Ellipse 20 20 360 480 smoke2 0xFFEEEE 0x000000
Ellipse 30 30 300 550 smoke3 0xFFEEEE 0x000000
Rectangle 236 200 474 181 wall 0xDECA8F 0x000000
Triangle 340 180 474 340 roof 0x9E6120 0x000000
Rectangle 30 30 412 227 windowl1 0xB5C9EE 0x000000
Rectangle 30 30 550 227 windowr1 0xB5C9EE 0x000000
Rectangle 30 30 412 130 windowl2 0xB5C9EE 0x000000
Rectangle 30 30 550 130 windowr2 0xB5C9EE 0x000000
Rectangle 80 20 474 167 eave 0xF9B06B 0x000000
Rectangle 25 55 462 128 doorl 0x8C1926 0x000000
Rectangle 25 55 486 128 door2 0x8C1926 0x000000
Rectangle 80 12 474 94 step1 0x9F9E99 0x000000
Rectangle 100 12 474 82 step2 0x9F9E99 0x000000
Ellipse 50 15 444 45 stone1 0x9F9E99 0x000000
Ellipse 55 18 322 31 stone2 0x9F9E99 0x000000
Ellipse 65 15 181 22 stone3 0x9F9E99 0x000000
Rectangle 10 15 154 78 trunk11 0x814000 0x000000
Triangle 95 50 154 103 crown11 0x002800 0x000000
Triangle 85 45 154 131 crown12 0x002800 0x000000
Triangle 70 40 154 156 crown13 0x002800 0x000000
Triangle 50 50 154 184 crown14 0x002800 0x000000
Exit
*/

int main(int argc, char *argv[])
{
    shapeArr.GetInput();
    shapeArr.ShowPos();

    initGraph(display, keyboard);
    return 0;
}
