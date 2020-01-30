#include <iostream>
using namespace std;
int main () {
    
    //imput an array
    
    int ray[100];
    int index = 0,num = 0;
   
    cout << "This program repeats numbers the user enters in reverse. Use -1 to end." << endl;
    cout << endl;
    // some kinda loop to get output to repear
    cout << "Number: ";
    cin >> num;
    while  ( num != -1 ) {
        ray[index] = num;
        index++;
        cout << "Number: ";
        cin >>num;
    }
    // output array backwards
   cout << "Numbers entered in reverse: ";
    index--;
    for (; index > -1 ;index--){
    cout << ray[index];
    cout << " ";
    
    }
}

