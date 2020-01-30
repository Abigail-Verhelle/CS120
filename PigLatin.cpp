#include <iostream>
using namespace std;
string PigLatinize (string l)
{
    string begin = "";
    string end = "";
    int y = 0;
    //vowels
    if(l[y] == 'a'|| l[y] == 'e'|| l[y] == 'i' || l[y] == 'o' || l[y] == 'u')
        return l +'-' + "yay";
    //y
    if (l[y] == 'y')
    {
        begin += l[y];
        y++;
    }
    //putting stuff in begin
    while (l[y] != 0 && l[y] != 'a'&& l[y] != 'e'&& l[y] != 'i' && l[y] != 'o' && l[y] != 'u' && l[y] != 'y' )
    {
        begin += l[y];
        y++;
    }
    //putting stuff in end
    while(l[y] != 0)
    {
        end += l[y];
        y++;
    }
    //output
    if (l[y] == 'a' || l[y] == 'e' || l[y] == 'i' || l[y] == 'o' || l[y] == 'u')
        
        return end + '-' + "yay";
    
    else
        
        return end + '-' + begin + "ay";
}
int main()
{
    //input
    string l;
    string t;
    while(l != "quit")
    {
    cout << "English: ";
    cin >> l;
    t = PigLatinize(l);
    cout << "Pig Latin: " << t << endl;
    }
}
