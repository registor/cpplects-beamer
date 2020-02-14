// 例04-zoo-main：ex04-zoo-main.cpp

int main()
{
    CBird birdObj("Eagle", 5, 50, 2);
    CHorse horObj("Mogolia horse", 5, 1000, 10000);
    CBull bullObj("Africa ox", 3, 2000, 20000);
    CPegasus pegObj("Pegasus", 5, 5000, 4, 100000);

    CZoo zoo;

    zoo.Add(&birdObj);
    zoo.Add(&horObj);
    zoo.Add(&bullObj);
    zoo.Add(&pegObj);

    zoo.Show();
    zoo.Talk();

    return 0;
}
