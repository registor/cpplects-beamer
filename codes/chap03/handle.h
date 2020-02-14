#ifndef HANDLE_H_INCLUDED
#define HANDLE_H_INCLUDED

class Handle{
public:
    void initialize();
    void cleanup();
    int read();
    void change(int);
private:
    // 前向引用说明
    struct Inner;
    // 指向数据成员
    Inner * pointer;
};

#endif // HANDLE_H_INCLUDED
