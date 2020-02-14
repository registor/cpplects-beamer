// 例03-24：ex03-24.cpp
// 类 CTetromino 默认构造函数的实现

CTetromino::CTetromino()
{
    size = 20;
    speed = 1;
    color = 0xFF0000;
    vxInit = 600 / (2 * size) - 2;
    vyInit = 800 / size - 1;
    vx[0] = 0; vy[0] = 0;
    vx[1] = 1; vy[1] = 0;
    vx[2] = 2; vy[2] = 0;
    vx[3] = 3; vy[3] = 0;
}
