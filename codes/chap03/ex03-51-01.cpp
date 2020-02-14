// 例 03-51-mutable : ex03-51-01.cpp
class Data
{
    // mutable 成员
    mutable bool cache_valid;
    mutable string cache;
    void compute_cache_value() const;
    // ...
public:
    // ...
    string string_rep() const;
};

// 常函数中可以修改数据成员
string Data::string_rep()const{
    if(!cache_valid){
        compute_cache_value();
        cache_valid = true;
    }
    return cache;
}
