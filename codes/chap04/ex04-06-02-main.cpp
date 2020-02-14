// 例04-06-02：ex04-06-02.cpp
// 重载输入输出操作符的实现及测试

ostream &operator<<(ostream &out, CLocation loc){
    out << loc.latitude << " " << loc.longitude << endl;
    return out;
}
istream& operator>>(istream& in, CLocation& loc){
    in >> loc.latitude >> loc.longitude;
    if(loc.latitude < -90 || loc.latitude > 90)
        cout << "Error latitude input!" << endl;
    if(loc.longitude < -180 || loc.longitude > 180)
        cout << "Error longitude input!" << endl;
    return in;
}
int main(){
    CLocation loc;
    |\colorbox{green}{\textcolor{red}{cin >> loc}}|;
    |\colorbox{green}{\textcolor{red}{cout << loc}}|;
    return 0;
}
