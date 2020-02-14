// 例03-07：ex03-07.cpp
// C 语言方式实现结构体 CStash
//  的处理函数 add

int add(CStash* s, int element)
{
    // 检查 s.a 是否满了
    if(s->next >= s->size)   
        // s.a 已无空间时，
        // 增加 increment 个单位    
        inflate(s, increment); 
    // 尾部加入元素
    s->a[s->next] = element;   
    // 更新 next 值
    s->next++;                 

    return(s->next - 1);
}
