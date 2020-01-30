#include <iostream>
#include <iomanip>
using namespace std;

// function for squareroot

double squareRoot(int number)
{
    if (number == 1)
    {
        return 1;
    }
    double previous = number/2;
    double newguess = (previous + number/previous)/2;
    
    while (previous != newguess)
    {
        previous = newguess;
        newguess = (previous + (number/previous))/2;
        
    }
    return newguess;
}
int main()
{
//input
    
    double number = 0;
    cout << "Enter number: ";
    cin >> number;
    
    double answer = squareRoot(number);
    
    
    //output
    //cout << fixed;
    cout << "The square root of " << number << " is " << setprecision(7) << answer << endl;
    
}
