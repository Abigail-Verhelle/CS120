#include <iostream>
using namespace std;
int main(){

    //variables and array
    int input[100];
    int DE[100];
    int size = 0,a = 0,num = 0;
    
     cout << "Enter integer values into array, or -1 to stop:"<< endl;
    //input
    cin >>num;
    while(num != -1)
    {
        input[a]=num;
        a++;
        cin >> num;
    }
   

    cout << "Distinct values in the array:"<< endl;
    cout << "(";
    DE[0]=input[0];
    int m = 0, size2 = 1;
    size = a;
    for(int g = 1;g < size;  g++){
        bool distinct=true;
        for(m = 0;m < size2;m++){
            if (input[g]==DE[m]){
                distinct=false;
            }
        }
            if(distinct)
            {
                DE[m]=input[g];
                size2++;
            }
        
    }

//output
    cout << DE[0];
    for(int v=1;v < size2 ;v++){
        cout << "," << DE[v];
    }
    
        
        //parenthese
        cout << ")" << endl;
}
