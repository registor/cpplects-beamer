// 例 03-37-01-singleton : ex03-37-01.cpp
Singleton* Singleton::sp = nullptr;

Singleton* Singleton::getInstance(int _num){
    if(sp == nullptr) {sp = new Singleton(_num);}
    return sp;
}

int main(){
    Singleton* sp = Singleton::getInstance(1);
    sp->handle();
    Singleton* st = Singleton::getInstance(10);
    st->handle();
}
