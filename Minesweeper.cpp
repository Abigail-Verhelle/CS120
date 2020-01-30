#include <iostream>
using namespace std;
int main ()
{
    int column = 0;
    int rows = 0;
    int current = -1;
    
   //input
    cin >> rows;
    cin >> column;
    
    string board;
    string map;
    

    //checking for astric and adding to zero
    for (int i =0; i < rows;i++)
    {
        cin >> map;
        board += map;
    }
    
    cout << endl;
    
    for (int j = 0; j < column;j++)
            
            int current = j;
    
            if (board[current] != '*')
                board [current] = '0';
    
            //middle left
            if (current % column > 0 && board [current-1] == '*')
                board[current]++;
    
            //middle right
            if (current % column != column-1 && board[current+1] == '*')
                board [current]++;
    
            //center bottom
            if (current + column < column * rows && board [current+column] == '*')
                board [current]++;
    
            //top middle
            if (current - column >= 0 && board[current - column] == '*')
                board [current]++;
    
            //bottom right
            if (current + column + 1 < column * rows && current % column != column && board [current + column + 1] == '*')
                board [current]++;
    
            // bottom left
            if (current + column - 1 < column * rows && current % column > 0 && board[current + column-1] == '*')
                board [current]++;
    
            //top right
            if (current - column + 1 > 0 && current % column != column - 1 && board[current - column + 1] == '*')
                board[current]++;
    
            //top left
            if ((current - column) % column > 0 && board[current - column - 1] == '*')
                board[current]++;
    
//output
    
    current = -1;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            current++;
            
            cout << board[current];
        }
        cout << endl;
    }
}

    
        
