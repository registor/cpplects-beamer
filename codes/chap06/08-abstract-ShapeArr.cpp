// 例08-abstrace-ShapeArr：ex08-abstract-ShapeArr.cpp
// 类成员函数的实现

void CShapeArr::Draw()
{
    for (int i=0; i<size; i++)
    {
        m_shape[i]->Draw();
    }
}

void CShapeArr::ShowPos()
{
    for (int i=0; i<size; i++)
        m_shape[i]->ShowPos();
}

void CShapeArr::Translate(int x, int y)
{
    for (int i=0; i<size; i++)
    {
        m_shape[i]->Translate(x,y);
    }
}
