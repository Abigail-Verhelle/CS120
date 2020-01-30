#include <iostream>
using namespace std;




int size (string num)
{
    int size = 0;
    
    //size count
    for (int w = 0; num[w] != 0; w++)
        size++;
    
    return size;
}


string sort (string num)
{
    int length = size(num);
    
    //selection sort
    
    for( int i = 1; i < length; i++ )
    {
        int pos = i;
        float value = num[pos];
        while( pos > 0 && value < num[pos-1] )
        {
            num[pos] = num[pos-1];
            pos--;
        }
        num[pos] = value;
    }
    return num;
}



string strg(int V)
{
    string r = "";
    
    //convertion to string
    while (V > 0)
    {
        r += (char)((V % 10)+48);
        V /= 10;
    }
    
    return r;
}











double sqRoot(int number)
{
    //case for 1
    if (number == 1)
    {
        return 1;
    }
    
    //calc for sqroot
    double previous = number/2;
    double newguess = (previous + number/previous)/2;
    
    while (previous != newguess)
    {
        previous = newguess;
        newguess = (previous + (number/previous))/2;
        
    }
    return newguess;
}














int findfangs(string num,int V)
{
    int numsize = size(num);
    string compare = sort(num);
    string fang1 = "";
    int fang1size = 0;
    string fang2 = "";
    
    if (numsize < 4 || numsize % 2 != 0)
        return -1;
    
    for (int i = 1; i < sqRoot(V); i++)
    {
        if (V % i == 0)
        {
            fang1 = strg(i);
            fang1size = size(fang1);
            
            if (fang1size == numsize/2)
            {
                int x = V/i;
                fang2 = strg(x);
                string vampcompare = fang1 + fang2;
                vampcompare = sort(vampcompare);
                
                if (i % 10 != 0 || x % 10 != 0)
                {
                    if (vampcompare == compare)
                    {
                        return i;
                    }
                    
                }
            }
        }
    }
    
    return -1;
}







int main()
{
    int V = 0;
    int fang1 = 0;
    int fang2 = 0;
    bool odd = false;
    string num = "";
    
    cout << "Enter a number: ";
    cin >> V;
    
    
    num = strg(V);
    fang1 = findfangs(num,V);
    //odd = length(num, V);
    
    cout << endl;
    
    if (fang1 == -1)
        cout << "No stakes needed"<< endl;
    
    else
    {
        
        fang2 = V/fang1;
    
        cout << fang1 << " * " << fang2 << endl;
    }
    
    
    
}
