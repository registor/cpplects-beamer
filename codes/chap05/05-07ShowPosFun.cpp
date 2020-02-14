// 例05-07：ex05-07.cpp
// 成员函数实现

void |\textcolor{red}{\textbf CShape}|::ShowPos()
{
    cout << strText << endl;
    cout << "CShape: (" << wPos.x << ","
               << wPos.y << ")" << endl;
}

void |\textcolor{red}{\textbf CRectangle}|::ShowPos()
{
    CShape::ShowPos();
    cout << "CRectangle: (" << lv1.x << ","
         << lv1.y << "), (" << lv3.x << ","
         << lv3.y << ")" << endl;
}
