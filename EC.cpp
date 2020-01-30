#include <iostream>
using namespace std;
int main(){
    
    // values
    char letter=0,output = 0;
    int value=0;
    // input
    cout << "This program encrypts a single letter." << endl;
    cout << endl;
    cout << "Letter:";
    cin >> letter;
    cout << "Key:";
    cin >> value;
    cout << endl;
    
    letter = toupper(letter);
    output = letter + value;
    
    // addition or subtraction to find value of output
    if (output < 65){
        output = output + 26;
    }
    else if (output > 90){
        output = output - 26;
    }
    
    //output
    cout << "Result: ";
    cout << (char)output << endl;
    
    // a=65 z=90
}
