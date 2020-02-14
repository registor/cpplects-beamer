//注意要使用声音在linker settings配置里要加入“libwinmm.a”
#include "Bird.h"
#include "Horse.h"
#include "Pegasus.h"
#include "Bull.h"

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
