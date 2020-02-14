#include <iostream>
#include <string>
using namespace std;

int main()
{
    char * S1 = "The quick brown fox jumps over the lazy dog";
    string S2 = S1;
    string S3("lazy dog");  	//用字符串初始化新串
    string S4(S3);      	        //利用已存在的串S3初始化新串
    string S5(S2, 4, 15);   	//利用已存在的串S3初始化新串
    string S6(S1, 19);     	   //利用已存在的字符数组初始化新串
    string S7(50, '-');
    cout << S7 << endl;
    cout << "S2=" << S2 << endl;
    cout << "S3=" << S3 << endl;
    cout << "S4=" << S4 << endl;
    cout << "S5=" << S5 << endl;
    cout << "S6=" << S6 << endl;
    cout << S7 << endl;
}
