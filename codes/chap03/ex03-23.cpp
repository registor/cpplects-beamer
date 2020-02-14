// 例03-23：ex03-23.cpp
#include "Cie2DGraph.h"
using namespace Cie2DGraph;
class CTetromino
{
    unsigned long color;
    int vxInit, vyInit;
    int vx[4], vy[4];
    int size;
    float speed;
public:
    |\tikzmark{ctetroctorb}|CTetromino();
    |\tikzmark{ctetroctorc}|CTetromino(char inType,
               unsigned long inColor,
               int inSize = 20|\tikzmark{ctetroctord}|,
               float inSpeed = 1|\tikzmark{ctetroctorf}|);
    void Translate(int xOffset, int yOffset);
    void Draw();
    ...
};
