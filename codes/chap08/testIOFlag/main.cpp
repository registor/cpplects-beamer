#include <iostream>
using namespace std;

struct fmtflags
{
    long flag;
    char flagname[12];
} flags[18] = {{ios::hex, "hex"},
    {ios::dec, "dec"},
    {ios::oct, "oct"},
    {ios::basefield, "basefield"},
    {ios::internal, "internal"},
    {ios::left, "left"},
    {ios::right, "right"},
    {ios::adjustfield, "adjustfield"},
    {ios::fixed, "fixed"},
    {ios::scientific, "scientific"},
    {ios::basefield, "basefield"},
    {ios::showbase, "showbase"},
    {ios::showpoint, "showpoint"},
    {ios::showpos, "showpos"},
    {ios::skipws, "skipws"},
    {ios::uppercase, "uppercase"},
    {ios::boolalpha, "boolalpha"},
    {ios::unitbuf, "unitbuf"}
};

int main()
{
    long IFlags, INewFlags;
    IFlags = cout.setf(ios::hex, ios::basefield);
    INewFlags = cout.flags();
    cout << "Default flag is:" << IFlags << endl;
    cout << "New flag is:" << INewFlags << endl;
    for(int i = 0; i < 18; i++)
        cout << flags[i].flag << '\t' << flags[i].flagname << endl;
    return 0;
}

