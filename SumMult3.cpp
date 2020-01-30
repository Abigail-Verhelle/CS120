#include <iostream>
using namespace std;
int sum3s (int number)
{
    //base case
    if (number < 3)
        return 0;
    
    //finding mults and adding it to get sum
    return sum3s(number - 3)+ number - (number % 3);
    
}
int main()
{
    int number = 0;
    
    //input
    cout << "Enther number: ";
    cin >> number;
    
    number = sum3s(number);
    
    //output
    cout << "The sum is " << number << "." << endl;
}
