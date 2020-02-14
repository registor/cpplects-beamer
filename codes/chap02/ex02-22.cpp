// 例02-22：ex02-22.cpp
#define  USA         0
#define  CHINA       1
#define  ENGLAND   2
#define  ACTIVE_COUNTRY  USA

#if   ACTIVE_COUNTRY = = USA
char *currency = "dollar";
#elif  ACTIVE_COUNTRY = = ENGLAND
char *currency = "pound";
#else
char *currency = "yuan";
#endif
int main ( )
{
    float money;
    cin >> money;
    cout << money << currency << endl;
    return 0;
}
