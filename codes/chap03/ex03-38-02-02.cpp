// 例 03-38-02 : ex03-38-02-02.cpp
    void select(int i, int j){
        if(i < 0 || i >= cnt) 
            return;
        (this->*fptr[i])(j);
    }
    int count() {return cnt;}
};

int main()
{
    FuncTable ft;
    for(int i = 0; i < ft.count(); i++){
        ft.select(i, 20);
    }

    return 0;
}
