// 例02-09：ex02-09.cpp
void SetNetCamera (char *UserName = "guest", char *Password = "321",
                   char *URL = "219.145.198.100", char *ServerName = "654",
                   float Zoom = 0.2, float Alpha = 10.0, float Beta = 15.0)
{
    cout << UserName << " " << Password << " " 
                     << URL << " " << ServerName << " "
                     << Zoom << " " << Alpha << " " << Beta << endl;
}
int main()
{
    SetNetCamera();
    SetNetCamera("Xinji", "class1&2", "219.145.198.105", "654");
    SetNetCamera("Administrator", "nwsuaf", "219.145.198.108", "654", 
                  1.0, 15.0, 30.0);
    return 0;
}
