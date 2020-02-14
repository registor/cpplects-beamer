#include <functional>
#include <algorithm>

int main ()
{
    bool values[] = {true, false};
    bool result[2];
    
    transform (values, values + 2, result, logical_not<bool>() );
    cout << boolalpha << "Logical NOT:\n";
    
    for (int i = 0; i < 2; i++)
        cout << "NOT " << values[i] << " = " << result[i] << "\n";
        
    return 0;
}
