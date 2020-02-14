// 例01-zoo-CAnimal：ex01-zoo-CAnimal.cpp

class CAnimal
{
    char name[32];
    int age;
    int weight;
public:
    CAnimal(const char *strName = "", int a = 0, int w = 0)
    {
        strcpy(name, strName);
        age = a;
        weight = w;
    }
    void Show()
    {
        cout << name << " " << age << " " << weight  << " ";
    }
};
