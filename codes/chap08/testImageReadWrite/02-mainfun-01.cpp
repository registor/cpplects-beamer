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
