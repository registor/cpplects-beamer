// 例02-13：ex02-13.cpp
void SetNetCamera (char *UserName = "Guest", char *Password = "321",
                   char *URL, char *ServerName,
                   float Zoom = 0.2, float Alpha = 10.0, float Beta = 15.0)
{
    cout << UserName << " " << Password << " "
         << URL << " " << ServerName << " "
         << Zoom << " " << Alpha << " " << Beta << endl;
}
