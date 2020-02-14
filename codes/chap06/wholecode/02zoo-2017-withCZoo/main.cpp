//注意要使用声音在linker settings配置里要加入“libwinmm.a”
#include "Bird.h"
#include "Horse.h"
#include "Pegasus.h"
#include "Bull.h"
#include "Zoo.h"

int main()
{
    CBird birdObj("Eagle", 5, 50, 2);
    CHorse horObj("Mogolia horse", 5, 1000, 10000);
    CBull bullObj("Africa ox", 3, 2000, 20000);
    CPegasus pegObj("Pegasus", 5, 5000, 4, 100000);

    CZoo z;

    z.AddBird(birdObj);
    z.AddHorse(horObj);
    z.AddBull(bullObj);
    z.AddPegasus(pegObj);

    z.Show();
    z.Talk();


    return 0;
}
