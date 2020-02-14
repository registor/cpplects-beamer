// 例04-zoo-virtfun-show.cpp
// 实现CAnimal中的虚函数Show

virtual void CAnimal::Show()
{
    cout << name << " " << age <<
    " " << weight  << " ";
}
