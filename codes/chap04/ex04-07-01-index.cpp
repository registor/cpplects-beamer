// 例04-07-01：ex04-07-01.cpp
// 重载 [] 操作符

class atype{
    int a[3];
public:
    atype(int i, int j, int k){
        a[0] = i;
        a[1] = j;
        a[2] = k;
    }
    int &operator[](int i){
        if(i < 0 || i > 2)
        {
            cout << "Boundary Error\n";
            exit(1);
        }
        return a[i];
    }
};
