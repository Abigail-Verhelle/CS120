#include <iostream>
using namespace std;
//reverse
int reverse (int num)
{
    int rev = 0;
    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    return rev;
}
int main()
{
    //input
    int num = 0;
    int rev = 0;
    int count = 0;

    cout << "Enter number: ";
    cin >> num;
    //calculating the reverse and add
    while (num != rev && count < 200)
    {
        num = num + rev;
        rev = reverse(num);
        count++;
        //output so it doesn't get a neg 
        if (num < 0)
            count = 200;
    }
    if (count == 200)
    {
        cout << "No palindrome found." << endl;
    }
    else
    {
        cout << "Palindrome: " << rev << endl;
    }
}
