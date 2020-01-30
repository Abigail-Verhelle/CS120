#include <iostream>
using namespace std;
int main(){
    string MFC;
    string MFC2;
    
    char highest;
    int count = 0,highcount=0;
    //input
    cout << "Enter a string: ";
    cin >> MFC;
    
    MFC2 = MFC;
    // capilazation?
    for(int p = 0; MFC[p] != 0;p++){
        MFC[p] = toupper(MFC[p]);
    }
    //calculation
    for(int i =0;MFC[i] !=0; i++){
        for(int j = i;MFC[j] != 0;j++){
            if(MFC [j] == MFC [i]){
                count++;
                
            }
            if(highcount < count){
                highest = toupper(MFC[i]);
                highcount = count;
                
            }
        }
        count = 0;
    }
    //output
    cout << "The most frequent character in " << MFC2 << " is " << highest << ".";
    
}
