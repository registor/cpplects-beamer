// 例ex03-53-ctor-main.cpp
base g1("g1");|\tikzmark{a\thepage}|
base g2("g2");|\tikzmark{b\thepage}|
int main()
{
    base l1("l1");|\tikzmark{c\thepage}|
    base l2("l2");|\tikzmark{d\thepage}|
    base *d1, *d2;
    d1 = new base("d1");|\tikzmark{e\thepage}|
    d2 = new base ("d2");|\tikzmark{f\thepage}|
    delete d1;|\tikzmark{g\thepage}|
    delete d2;|\tikzmark{h\thepage}|
    return 0;|\tikzmark{i\thepage}|
}
