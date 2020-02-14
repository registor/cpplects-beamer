// 例03-03-02：ex03-03-02.cpp

myRect r = {10.0, 10.0,
            200.0, 100.0};  

void display()
{
    r.Draw();  
}

void keyboard(unsigned char key)
{
    r.Move();   
}

int main(int argc, char *argv[])
{
    initGraph(display, keyboard);  

    return 0;
}
