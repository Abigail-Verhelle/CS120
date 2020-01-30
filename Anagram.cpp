#include <iostream>
using namespace std;
//making string lower
string toLower (string B)
{
    string C;
    for (int t = 0; B[t] != 0; t++)
    {
        if( isalpha(B[t]))
            C += tolower(B[t]);
    }
    return C;
}

//sort to be in alphabetic order
string insertionSort(string A)
{
    
    for( int i = 1; A[i] != 0; i++ )
    {
        int pos = i;
        char value = A[pos];
        while( pos > 0 && value < A[pos-1] )
        {
            A[pos] = A[pos-1];
            pos--;
        }
        A[pos] = value;
        
    }
    return A;
}
    // do they equal each other
bool anagrams(string word, string word2)
{
    
    word = toLower (word);
    word2 = toLower (word2);
    cout << word << " and " << word2 << endl;
    word = insertionSort(word);
    word2 = insertionSort(word2);
    
    
    if (word == word2)
    {
        return true;
    }
    
    return false;
}

int main()
{
    string word;
    string word2;
    string junk;
    
    cin >> word;
    cin >> word2;
    
    //output
    if (anagrams(word,word2))
    {
        cout << word << " is an anagram of "<< word2 << endl;
    }
    
    else
    {
        cout << word << " is not an anagram of "<< word2 << endl;
    }
   
    
}
