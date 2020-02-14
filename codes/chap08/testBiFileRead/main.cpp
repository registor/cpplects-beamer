#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char name[8];
    float score;
    fstream myfile;
    myfile.open("record.bin", ios::in | ios::binary);
    if(!myfile)
    {
        cerr << "File open or create error!" << endl;
        return 0;
    }

    while(!myfile.eof())
    {
        myfile.read((char *)name, 8 * sizeof(char));
        myfile.read((char *)(&score), sizeof(float));
        if(myfile) cout << name << '\t' << score << endl;
    }

    myfile.close();
    return 0;
}

