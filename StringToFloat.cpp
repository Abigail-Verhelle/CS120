#include <iostream>
using namespace std;
float stringToFloat(string s)
{
    int i = 0;
    float output = 0;
    float mult = .1;
    //negtive
    
    if (s[0] == '-')
    {
        i++;
    }
    //look at the first part
    while (s[i] != '.' && s[i] != 0)
    {
        output *= 10;
        output += s[i] - '0';
        i++;
    }
    if(s[i] == '.')
        i++;
    //end + decimal
    while (s[i] != 0)
    {
        output += ((s[i] - '0') * mult);
        mult = mult / 10;
        i++;
    }
           
    if (s[0] == '-')
    {
           output *= -1;
    }
    
           return output;
   
}
int main()
{
    
    string s;
    cout << "Enter String: ";
    cin >> s;
    float output = stringToFloat(s);
    cout << "The string " << s << " becomes the float " << output << endl;
}

