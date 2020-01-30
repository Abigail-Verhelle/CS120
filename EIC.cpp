#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    string a;
    string b;
    string c;
    string d;
    
    //input
    cout << "String 1: ";
    cin >> a;
    cout << "String 2: ";
    cin >> b;
    cout << endl;
    
   //make second string to manipulate it
    c = a;
    d = b;
    int size1 = 0;
    int size2 =0;
    //upper case the new strings
    for(int p = 0 ;c[p] != 0 ;p++) {
        c[p] = toupper(c[p]);
        size1++;
    }
    
    for(int y = 0; d[y] != 0;y++){
        d[y] = toupper(d[y]);
        size2++;
    }
    // compare size
    if(size1 != size2){
        cout << a << " and " << b << " are not equal."<< endl;
    }
    
    bool equals = true;
    
    //compare
    int same = 0,diff = 0;
    for( int h = 0; h != size1;h++){
        if(c[h] == d[h]){
            same++;
        }
        else if (c[h] != d[h]){
            diff++;
        }
    }
    //output
        if(same == size1){
            cout << a << " and " << b << " are equal."<< endl;
        
        }
        else{
            cout << a << " and " << b << " are not equal."<< endl;
        }

    
}
