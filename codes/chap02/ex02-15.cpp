// 例02-15：ex02-15.cpp
#include <iostream>
using namespace std;
float RadianToAngle(float radian)
{
    return radian * 180.0 / 3.1416;
}
void SetNetCamera (char *UserName, char *Password,
                   char *URL = "219.145.198.100", char *ServerName = "654",
                   float Zoom = 0.2, float Alpha = RadianToAngle(0.174),
                   float Beta = RadianToAngle(0.262))
{
    cout << UserName << " " << Password << " "
         << URL << " " << ServerName << " "
         << Zoom << " " << Alpha << " " << Beta << endl;
}
int main()
{
    SetNetCamera("Xinji", "class1&2", "219.145.198.105", "654");
    return 0;
}
