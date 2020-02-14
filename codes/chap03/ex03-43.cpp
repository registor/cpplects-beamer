// 例03-43：ex03-43.cpp
// 类的前向声明，参数为引用型的函数示例

class Matrix;   // 类的前向声明
class Vector{
    float e[4];
    //...
    friend Vector Multi(const Matrix&, const Vector&);
};
class Matrix{
    Vector v[4];
    //...
    friend Vector Multi(const Matrix&, const Vector&);
};
Vector Multi(const Matrix &m, const Vector &v){
    Vector r;
    for(int i = 0; i < 4; i++){ //r[i]=m[i]*v;
        r.e[i] = 0;
        for(int j = 0; j < 4; j++)
            r.e[i] += m.v[i].e[j] * v.e[j];
    }
    return  r;
}
