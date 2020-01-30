#include <iostream>
using namespace std;
int SumOfThree(int num[],int count, int current, int sum3, int sum5)
{
    // base
    if (current == count)
    {
        return sum3 == sum5;
    }
    
    //sum5
    if(num[current]%5 == 0)
    {
        return SumOfThree(num, count, current+1, sum3, sum5 + num[current]);
    }
    
    //sum5
    if(num[current] % 3 == 0)
    {
        return SumOfThree(num, count, current+1, sum3 + num[current],sum5);
    }
    //either group
        return SumOfThree(num, count, current+1, sum3 + num[current], sum5) || SumOfThree(num, count, current+1, sum3, sum5 + num[current]);
}
int main()
{
    int count = 0;
    int num[100] = {};
    int current = 0;
    int sum3 = 0;
    int sum5 = 0;
    bool flag = false;
    
    cout << "How many values? ";
    cin >> count;
    
    cout << "Enter numbers: ";
    for (int h = 0; h < count; h++)
    {
        cin >> num[h];
    }
    
    flag = SumOfThree(num, count, current, sum3, sum5);
    
    if(flag)
        cout << "Yes, there are two equal subgroups." << endl;
    
    else
        cout << "No, there are not two equal subgroups." << endl;
}
