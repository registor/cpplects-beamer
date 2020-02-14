// 例05-11：ex05-11.cpp
// 定义一个类 CAnimal

#include <iostream>
#include <cstring>

using namespace std;

class CAnimal
{
    char name[32];
    int age;
    int weight;
public:
    CAnimal(const char *strName="", int a=0, int w=0){
        strcpy(name, strName);
        age = a;
        weight = w;
        cout << "Animal constructor " << name << endl;
    }
    void Show(){
        cout << name << " " << age << " " << weight << endl;
    }
    ~CAnimal(){
        cout << "Animal destructor " << name << endl;
    }
};
