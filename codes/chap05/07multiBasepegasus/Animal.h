#ifndef CANIMAL_H
#define CANIMAL_H

class CAnimal
{
public:
    CAnimal(const char *strName="", int a=0, int w=0);
    ~CAnimal();

    void Show();

private:
    char name[32];
    int age;
    int weight;
};

#endif // CANIMAL_H
