#include <iostream>
#include <fstream>

using namespace std;

//下列代码处理图像宽度必须为4的倍数！
#define MIN3(x,y,z)  ((y) <= (z) ? ((x) <= (y) ? (x) : (y)) : ((x) <= (z) ? (x) : (z)))
#define MAX3(x,y,z)  ((y) >= (z) ? ((x) >= (y) ? (x) : (y)) : ((x) >= (z) ? (x) : (z)))

#pragma pack(1)
struct FILEHEADER
{
    char type[18];       // 标识"BM"
    int width;           // 图像宽
    int height;          // 图像高
    char dummy[28];      //无用信息
};

struct RGB
{
    unsigned char b; // 蓝
    unsigned char g; // 绿
    unsigned char r; // 红
};
