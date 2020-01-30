#include <iostream>
using namespace std;
//actually removing odds
void removeOdds(int A[ ], int& size)
{
    //declare
    int e =0;
    for (int x = 0;x< size;x++)
    {
        if(A[x]%2 == 0)
        {
            A[e] = A[x];
            e++;
            
        }
        
        
    }
    //replace size
    size = e;
}







//input
void printArray(int X[], int n)
{
    cout << "[ " << X[0];
    for( int i = 1; i < n; i++)
        cout << ", " << X[i];
        
    cout << " ]";
}
//call function
int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    
    printArray(A,size);
    removeOdds(A, size);
    printArray(A,size);
    //output
    cout << " and the size is " << size << endl;
}

