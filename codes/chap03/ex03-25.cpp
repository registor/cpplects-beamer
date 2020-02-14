// 例03-25：ex03-25.cpp
// 类CTetromino，有参数构造函数实现

CTetromino::CTetromino(char inType,
                unsigned long inColor,
                int inSize, float inSpeed)
{
    size = inSize;
    speed = inSpeed;
    color = inColor;
    vxInit = 600 / (2 * size) - 2;
    vyInit = 800 / size - 1;
    switch (inType)
    {
    case 'I': case 'i':
        vx[0] = 0; vy[0] = 0;
        vx[1] = 1; vy[1] = 0;
        vx[2] = 2; vy[2] = 0;
        vx[3] = 3; vy[3] = 0;
        break;
        |$\vdots$|
    case 'T': case 't':
        vx[0] = 0; vy[0] = 0;
        vx[1] = 1; vy[1] = 0;
        vx[2] = 2; vy[2] = 0;
        vx[3] = 1; vy[3] = 1;
        break;
    default:
        vx[0] = 0; vy[0] = 0;
        vx[1] = 1; vy[1] = 0;
        vx[2] = 2; vy[2] = 0;
        vx[3] = 3; vy[3] = 0;
        break;
    }
}

