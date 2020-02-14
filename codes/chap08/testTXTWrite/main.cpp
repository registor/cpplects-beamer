#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    float score;
    fstream myfile;
    myfile.open("record.txt", ios::out);
    if(!myfile)
    {
        cerr << "File open or create error!" << endl;
        return 0;
    }

    while( cin >> name && name != "exit")
    {
        cin >> score;
        myfile << name << ' ' << score << endl;
    }

    myfile.close();
    return 0;
}
