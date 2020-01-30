#include <iostream>
using namespace std;

string justletters(string r)
{
    int i = 0;
    while (r[i] != 0)
    {
        i++;
    }
    
    for (int x =0; x < i; x++)
    {
        string l = alpha(r[x]);
    }
    return string l;
}
int main()
{
    string r = "";
    cout < "Enter string: ";
    cin >> r;
    
    string answer = justletters(w);
    
    cout << "The letters are " << answer << endl;
}
