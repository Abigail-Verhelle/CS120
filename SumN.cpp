#include <iostream>
using namespace std;
bool SumN(int list[], int size, int here, int N, int sum)
{
    //Base
    if(here >= size)
    {
        return N == sum;
    }

    //recursion: add number || dont add number
    return SumN(list, size, here+2, N, sum + list[here]) || SumN(list, size, here+1, N, sum);

}
    int main()
{
    int size = 0;
    int list[100];
    int N = 0;
    int here = 0;
    int sum = 0;
    bool t = false;
    
    cout << "How many values? ";
    cin >> size;
    
    cout << "Enter number: ";
    
    for(int i = 0; i < size; i++)
        cin >> list[i];
    
    cout << "Enter sum: ";
    cin >> N;
    
    cout << endl;
    
    t = SumN(list, size, here, N, sum);
    
    if (t)
        cout << "Yes, there is a subset that sums to " << N << "." << endl;
    
    else
        cout << "No, there is no subset that sums to " << N << "." << endl;
}
