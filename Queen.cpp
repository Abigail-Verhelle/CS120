#include <iostream>
using namespace std;
int main(){

    int board[8];
    //output & input
    cout << "Enter the columns containig queens, in order by row: ";
    // for loop for input
    for (int i = 0;i < 8;i++){
        cin>> board[i];
    }
    // row
    for (int i = 0;i < 8;i++){
        
    //col
    for(int j = 0;j < 8;j++){
  // output
    if (board[i] == j){
        cout << "Q";
    }
    else{
        cout << ".";
    }
    }
    
    //has to end the line
    cout<< endl;
    }
}
