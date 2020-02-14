// 例02-11：ex02-11.cpp
void SetNetCamera (char *UserName = "Guest", char *Password = "321",
                   char *URL = "219.145.198.100", char *ServerName = "654",
                   float Zoom = 0.2, float Alpha = 10.0, float Beta = 15.0) ;

int main()
{
    SetNetCamera();
}

void SetNetCamera (char *UserName, char *Password, char *URL,
                   char *ServerName, float Zoom, float Alpha, float Beta)
{
    cout << UserName << " " << Password << " "
         << URL << " " << ServerName << " "
         << Zoom << " " << Alpha << " " << Beta << endl;
}
