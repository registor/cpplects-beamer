#include<iostream>

using namespace std;
int main()
{
    char c;

    while ( (c = cin.get()) != '\n' )
        cout.put(c);

    cout << endl ;

    char s[ 80 ] ;
    cin.get(s, 10) ;
    cout << s << endl ;
}
