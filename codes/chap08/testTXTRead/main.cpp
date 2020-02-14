#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string name;
    float score;
    ifstream myFile;

    myFile.open("record.txt");
    if(!myFile)
    {
        cerr << " record.txt open error!" << endl;
        return 0;
    }

    while(!myFile.eof())
    {
        myFile >> name >> score;
        if(myFile) cout << name << '\t' << score << endl;
    }

    myFile.close();
    return 0;
}
