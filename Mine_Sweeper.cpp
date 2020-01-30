#include <iostream>

using namespace std;



int main()

{
    
    
    
    //Declare var
    
    int row = 0;
    int column = 0;
    int current = -1;
    
    string board;
    
    string map;
    
    
    
    //Input
    
    cin >> row;
    
    cin >> column;
    
    
    
    for (int i = 0; i < row; i++)
        
    {
        
        cin >> map;
        
        board += map;
        
    }
    
    
    
    cout << endl;
    
    
    
    //Calc
    
    for (int i = 0; i < row * column; i++)
        
    {
        
        current = i;
        
        if (board[current] != '*')
            
        {
            
            board[current] = '0';
            
            
            
            //middle left
            
            if (current % column > 0 && board[current-1] == '*')
            {
                board[current]++;
            }
            
            //middle right
            if (current % column != column - 1 && board[current+1] == '*')
            {
                board[current]++;
            }
            
            //middle bottom
            if (current + column < row * column && board[current + column] == '*')
            {
                board[current]++;
            }
            
            //middle top
            if (current - column >= 0 && board[current - column] == '*')
            {
                board[current]++;
            }
            
            //bottom right
            if ( current + column + 1 < row * column && current % column != column - 1 && board[current + column + 1] == '*')
            {
                board[current]++;
            }
            
            //bottom left
            if (current + column - 1 < row * column && current % column > 0 && board[current + column - 1] == '*')
            {
                board[current]++;
            }
            
            //top right
            if (current - column + 1 > 0 && current % column != column - 1 && board[current - column + 1] == '*')
            {
                board[current]++;
            }
            
            //top left
            if ((current - column) % column > 0 && board[current - column - 1] == '*')
            {
                board[current]++;
            }
            
        }
        
    }
    
    
    
    //output
    
    current = -1;
    
    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j < column; j++)
            
        {
            
            current++;
            
            cout << board[current];
            
        }
        
        cout << endl;
        
    }
    
    
    
}
