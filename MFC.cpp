#include <iostream>
using namespace std;
int main(){
    string a;
    int max = 0, max2 = 0,max3 = 0,size=0;
    cout << "Enter a string: ";
    cin >> a;
    string b;
    b = a;
    for(int i = 0; i != 0;i++){
        b[i] = toupper(a[i]);
        size++;
    }
    //string b;
    //b = a;
    string c;
    int num = 0,num2 = 0;
    b[0] = c[0];
    for(int g = 0; a[g] != 0; g++){
        for (int r = 1; a[r] != 0; r++){
            if (b[r] == c[g]){
                max = b[r];
                num++;
            }
            else if(b[r] != c[g]) {
                num2++;
                max2 = b[2];
            }
            else{
                max3 = b[0];
            }
        }
        }
    if (num == size){//(num > num2){
        cout << "The most frequent character in " << a << " is " << (char) toupper (a[0]) << ".";
        //cout << "The most frequent charater in " << a << "is " << (char) max << ".";
        }
        else if (num > num2){
           cout << "The most frequent character in " << a << "is " << (char) toupper(max) << ".";
            //cout << "The most frequent charater in " << a << " is " << (char)max2 << ".";
        }
        else {
            cout << "The most frequent character in " << a << " is " << (char) toupper (max2) << ".";
            //cout << "The most frequent charater in " << a << " is " << a[0] << ".";
        }
    
}
