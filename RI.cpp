#include <iostream>
using namespace std;
    //function to round
    int round (int number,int unit)
    {
        int digit = number % unit;
        number = number - digit;
        return number;
    }
    // place * 10 at some point
int main (){
    //input
    int a = 0, place= 10;
    cout << "Enter an integer: ";
    cin >> a;
    
    cout << endl;
    //ten
    cout << "Round to ten: " << round(a,place) << endl;
    place = place*10;
    //hundred
    cout << "Round to hundred: " << round(a,place) << endl;
    place = place*10;
    //thousand
    cout << "Round to thousand: " << round(a,place) << endl;
}
