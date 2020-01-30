#include <iostream>
using namespace std;

int main(){
    // identify int
    int num = 0, rev = 0;
    //output
    
    cout << "This program reverses the digits of an integer." << endl;
    cout << endl;
    cout << " Enter an integer: " << endl;
    cin >> num;
    
    //while loop that reverses numbers
    while (num != 0){
        rev = (rev * 10) + (num % 10);
        num /= 10;
        
    }
    //output
    cout << " The reversed number is " << rev << "." << endl;
    // The End
    
    
    
}

