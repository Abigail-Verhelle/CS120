#include <iostream>
using namespace std;

int main()
{
    int a=0,b=0,lcm=0,g=0;
    
    // promt to enter numbers
    
    cout << "Enter Number: ";
    cin >> a;
    
    cout << "Enter number: ";
    cin >> b;
    
    
    //calculate the multipules
        if (a >= b) {
            g=a;
            lcm=a;
    }
            else {
                g=b;
                lcm=b;
    }
    
        while (lcm % a != 0 || lcm % b != 0) {
            lcm += g;
        //print LCM
       
    }
     cout << "LCM: " << lcm << endl;
    
    // The End 
    
    
    
    
  
    
}
