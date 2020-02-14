// 例05-02：ex05-02.cpp

class CShape{
    ULONG textColor;
    char strText[256];
protected:
    CPoint2D wPos;
    ULONG objColor;
public:
    CShape();
    CShape(CPoint2D w, char *strText,
           ULONG objColor = 0xBBE0E3,
           ULONG textColor = 0): wPos(w);
    void Translate(float x, float y);
    void DrawText();
    void ShowPos();
};
