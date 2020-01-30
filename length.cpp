#include <iostream>
using namespace std;

int stringlength( string w )
{
    int i = 0;
    while (w[i] != 0)
    {
        i++;
    }
    
    return i;
}
int main()
{
    string w;
    cout << "Enter string: ";
    cin >> w;
    
    int answer = stringlength(w);
    
    cout << "The length of the string is " << answer <<". " <<  endl;
    
}
