// 例02-07：ex02-07.cpp
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;
const int MAX_SIZE = 10000;

inline float getCos_inline(int &x)
{
    float r;
    x = rand();
    r = cos(2 * 3.1416 * x / (float)RAND_MAX);
    return r;
}

float getCos_call(int &x)
{
    float r;
    x = rand();
    r = cos(2 * 3.1416 * x / (float)RAND_MAX);
    return r;
}

int main()
{
    int i, j;
    int a;
    clock_t nStart, nElapsed;

    nStart = clock();
    srand(nStart);
    for(i = 0; i < MAX_SIZE; i++)
        for(j = 0; j < MAX_SIZE; j++)
        {
            getCos_inline(a);
        }
    nElapsed = clock() - nStart;
    cout << "Time for inline:" << nElapsed << endl;

    nStart = clock();
    for(i = 0; i < MAX_SIZE; i++)
        for(j = 0; j < MAX_SIZE; j++)
        {
            getCos_call(a);
        }
    nElapsed = clock() - nStart;
    cout << "Time for called function:" << nElapsed;
    return 0;
}
