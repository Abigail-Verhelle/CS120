#include <iostream>
using namespace std;
int count (string word2)
{
    int size;
    for (int y = 0; word2[y] != 0; y++)
    {
        size++;
    }
    return size;
}
string matchPrefixSuffix(string a, string b)
{
    string match;
    int spot = 0;
    int size = count(b);
    for (int i = 0;b[i] != 0;i++)
    {
        
        //compare word 2 to word 1
            if (b[i] == a[0])
            {
                //if equal set to match
                for (int j = 0;b[i+j] != 0 && b[i+j] == a[j]; j++)
                {
                    match += a[j];
                    spot = j;
                }
    
                
            }
        if (match[spot] == b[size-1])
        {
            return match;
        }
        
        else
        {
            match = "";
        }
    }
    return "";
}
int main()
{
    //input
    string word1, word2;
    cout << "Enter strings: ";
    cin >> word1 >> word2;
    //output
    string match = matchPrefixSuffix(word1,word2);
    if( match == "" ) // empty string
        cout << "There is no matching prefix and suffix.\n";
    else
        cout << "The longest match is \"" << match << "\"\n";
}
