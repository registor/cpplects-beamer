// 例04-01-01：ex04-01-01.cpp
// 重载 + 操作符

#include <iostream>
#include <iomanip>
using namespace std;
class CLocation{
    double latitude, longitude;
public:
    CLocation(){}
    CLocation(double lt, double lg){
        latitude = lt;
        longitude = lg;
    }
    void show(){
        cout << setprecision(9) << latitude << " ";
        cout << longitude << endl;
    }
    CLocation operator+(CLocation op2);
};
CLocation CLocation::operator+(CLocation op2){
    CLocation temp;
    temp.latitude = op2.latitude + latitude;
    temp.longitude = op2.longitude + longitude;
    return temp;
}
