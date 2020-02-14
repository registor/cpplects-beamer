// 例01-02：ex01-02.cpp
// 计算两个整数的和
#include <iostream> // 输入输出（流）
// main函数是程序的入口
int main()
{
    // 变量声明
    int number1 = 0; // 第1个整数 (初始化为 0)
    int number2 = 0; // 第2个整数 (初始化为 0)
    int sum = 0; // 和(初始化为 0)

    std::cout << "Enter first integer: "; // 提示输入数据
    std::cin >> number1; // 读入数据到number1

    std::cout << "Enter second integer: "; // 提示输入数据
    std::cin >> number2; // 读入数据到number2

    sum = number1 + number2; // 加，并将结果存入 sum

    std::cout << "Sum is " << sum << std::endl; // 显示sum; 并显示end line
    return 0;
}
