// 例04-02-01：ex04-02-01.cpp
// 重载 - , = , ++ 操作符

CLocation CLocation::operator-(CLocation op2){
    CLocation temp;
    temp.latitude = latitude - op2.latitude;
    temp.longitude = longitude - op2.longitude;
    return temp;
}
CLocation CLocation::operator=(CLocation op2){
    longitude = op2.longitude;
    latitude = op2.latitude;
    return *this;
}
CLocation CLocation::operator++(){
    longitude++;
    latitude++;
    return *this;
}

