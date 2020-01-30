#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    int graph[40];
    int values = 0;
    
    cout << "Number of values to graph: ";
    cin >> values;
    //input
    for (int i = 0;i < values;i++){
        cin >> graph[i];
    }
    cout << endl;
    //output
    for (int l = 0;l < values;l++){
            cout << setw(2) << graph[l] << " | ";
        // how to print hashtag
        for ( int hsh=0;hsh < graph[l];hsh++){
            cout << "#";
        }
        
        cout << endl;
    }
        
}
