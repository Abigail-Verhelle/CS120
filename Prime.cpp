#include <iostream>
using namespace std;
int main(){
// output
    int num=0;
    cout << "Enter number: ";
    cin >> num;
    //set prime to true
    bool prime=true;
    // special for 1
    if (num <= 1){
        prime = false;
    }
    // if statment to calculate prime
    for (int i = 2; i < num && prime; i++ ){
                if (num % i ==0)
                    prime=false;
    }
    if(prime){
        cout << num << " is prime. " << endl;
    }
    else{
        cout << num << " is not prime." << endl;
    }
}
        
        
        
        
        
        
        
        
   





