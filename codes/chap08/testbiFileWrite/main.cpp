#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name[8];
    float score;
    fstream myfile;
    myfile.open("record.bin", ios::out | ios::binary);
    if(!myfile)
    {
        cerr << "File open or create error!" << endl;
        return 0;
    }

    while( cin >> name && strcmp(name, "exit"))
    {
        cin >> score;
        myfile.write(name, 8 * sizeof(char));
        myfile.write((char *)&score, sizeof(float));
    }

    myfile.close();
    return 0;
}
