// 例08-abstract-dtor：ex04-abstract-dtor.cpp
// 实现类CShapeArr的析构函数

CShapeArr::~CShapeArr()
{
    //dtor
    if(size != 0)
    {
        for(int i=0; i< size; i++)
        {
            if(m_shape[i]!=NULL)
                delete m_shape[i];
        }
    }
}
