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

int main()
{
    FILEHEADER imgHead1, imgHead2;
    RGB pixel1, pixel2, pixel;
    float blendRatio = 0.5;
    fstream imgFile1, imgFile2, imgFileResult;

    imgFile1.open("Lighthouse.bmp", ios::in | ios::binary);
    imgFile2.open("Penguins.bmp", ios::in | ios::binary);
    imgFileResult.open("Result.bmp", ios::out | ios::binary);

    if(!imgFile1 || !imgFile2 || !imgFileResult)
    {
        cerr << "File open or create error!" << endl;
        return 0;
    }

    imgFile1.read((char *)(&imgHead1), sizeof(FILEHEADER));
    if(!imgFile1)
        return 0;

    cout << imgHead1.type[0] << imgHead1.type[1] << endl;
    cout << imgHead1.width << "," << imgHead1.height << endl;

    imgFile2.read((char *)(&imgHead2), sizeof(FILEHEADER));
    if(!imgFile2)
        return 0;

    cout << imgHead2.type[0] << imgHead2.type[1] << endl;
    cout << imgHead2.width << "," << imgHead2.height << endl;

    if(imgHead1.width != imgHead2.width || imgHead1.height != imgHead2.height)
        return 0;

    imgFileResult.write((char *)(&imgHead1), sizeof(FILEHEADER));

    for(int i = 0; i < (imgHead1.width * imgHead1.height); i++)
    {
        imgFile1.read((char *)(&pixel1), sizeof(RGB));
        if(!imgFile1) return 0;
        imgFile2.read((char *)(&pixel2), sizeof(RGB));
        if(!imgFile2) return 0;
        pixel = pixel1;

        pixel.b = pixel1.b * blendRatio + pixel2.b * (1 - blendRatio);
        pixel.g = pixel1.g * blendRatio + pixel2.g * (1 - blendRatio);
        pixel.r = pixel1.r * blendRatio + pixel2.r * (1 - blendRatio);

        pixel.r = pixel.g = pixel.b;
        imgFileResult.write((char *)(&pixel), sizeof(RGB));
    }

    imgFile1.close();
    imgFile2.close();
    imgFileResult.close();
    return 0;
}
