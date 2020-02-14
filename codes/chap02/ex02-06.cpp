// 例02-06：ex02-06.cpp
void CreateHeadNode(StuNode *&pHead)
{
    StuNode *p;
    p = new StuNode;
    if (p == NULL) return;
    p->next = NULL;
    pHead = p;
}

int main()
{
    StuNode *pHead = NULL;
    CreateHeadNode(pHead);
    return 0;
}
