#include <iostream>
using namespace std;

void removeOdds(int A[],int& size)//what does the & mean?
{
    for (int count = 0;count < size;count++)
    {
        while (A[count]%2 != 0)
        {
            for (int g = count; g < size;g++)
            {
            
                    A[g] = A[g+1];
                
               
            }
            size--;
        }
       
    }
    
}

void printArray(int X[], int n)
{
    cout << "[ " << X[0];
    for( int i = 1; i < n; i++ )
        cout << ", " << X[i];
    cout << " ]";
}

int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;

    printArray(A,size);
    removeOdds(A, size);
    printArray(A,size);
    
    cout << " and the size is " << size << endl;
}
