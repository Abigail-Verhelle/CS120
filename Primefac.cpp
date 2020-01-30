#include <iostream>
using namespace std;
int main(){
    // declaring varibles
    int num = 0;
    
    cout << " Number: ";
    cin >> num;
    
    cout << " ( ";
    
    // for loop
    for(int i = 2; i <= num; i++){
    
        while(num % i == 0){
            num/=i;
    //output
        if (num == 1 ){
            cout << i << " ) " << endl;;
        }
        else{
            cout << i << " * ";
        }
    }
    }
}
