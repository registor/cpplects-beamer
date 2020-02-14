// 例01-zoo-main：ex01-zoo-main.cpp
// 实例化CBird,CHorse,CBull,CPegasus的对象，并调用相应的方法

int main()
{
    CBird birdObj("Eagle", 5, 50, 2);
    CHorse horObj("Mogolia horse", 5, 1000, 10000);
    CBull bullObj("Africa ox", 3, 2000, 20000);
    CPegasus pegObj("Pegasus", 5, 5000, 4, 100000);

    birdObj.Show();
    birdObj.Talk();

    horObj.Show();
    horObj.Talk();

    bullObj.Show();
    bullObj.Talk();

    pegObj.Show();
    pegObj.Talk();

    return 0;
}
