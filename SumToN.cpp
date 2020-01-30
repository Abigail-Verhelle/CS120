#include <iostream>
using namespace std;
bool SumtoN (int list{},size,sum,here)
{
    if (sum == 0)
        return true;
   
    if else (size  <= here)
        return false;
    
    return SumtoN(list,size,sum-list[here],here+1) || SumToN (list,size,sum,here+1)
    
}
int main
{
    int sum = 0;
    int size = 0;
    int list [100];
    int here = 0;
    
    cout << "How many values? ";
    cin >> size;
    
    cout << "Enter numbers: ";
    cin >> list;
    
    cout << "Enter Sum: ";
    cin >> sum;
}
