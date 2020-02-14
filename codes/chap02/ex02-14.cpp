// 例02-14：ex02-14.cpp
void SetNetCamera (char *UserName, char *Password,
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
    SetNetCamera("Guest", "321");
    SetNetCamera("Xinong", "class1 & 2", "219.145.198.105", "654");
    SetNetCamera("Administrator", "nwsuaf");
    return 0;
}
