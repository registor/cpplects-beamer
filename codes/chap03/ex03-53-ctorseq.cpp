// 例03-53：ex03-53.cpp
// 构造函数，析构函数

#include <string>
#include <iostream>
using namespace std;
class base{
    string mark;
public:
    base(string str){
        mark = str;
        cout << "Constructor "
             << mark << endl;
    }
    ~base(){
        cout << "Destructor "
             << mark << endl;
    }
};
