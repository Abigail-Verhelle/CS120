#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int size;
    int values[40];
    int LargestIndex;
    int Largest = 0;
    
    //input
    cout << "Number of values to graph: ";
    cin >> size;
    
    for (int b = 0; b < size;b++)
    {
        cin >> values[b];
        if(values[b] > Largest)
            Largest = values[b];
    }
    cout << endl;
    //number of rows
    for (int h = Largest;h > 0; h--)
    {
        for (int g = 0; g < size;g++)
        {
            if (h <= values[g])
                cout << "  #";
            else
                cout << "   ";
            
        }
         cout << endl;
    }
    //dash output
    for (int f = 0;f < size;f++)
    {
        cout << "---";
    }
    cout << endl;
    // number output
    for (int u = 0; u < size;u++)
    {
        cout << setw(3) << values[u];
    }
    cout << endl;
}

