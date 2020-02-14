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
