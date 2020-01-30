#include <iostream>
using namespace std;
int main()
{
    string name = "";
    cout << "Enter name or quit to stop: " << endl;
    cin >> name;
    
    while (name != "quit")
    {
    
            if (name == "kendra")
            cout << "Hello Mother!" << endl;
    
        else if (name == "cleba")
            cout << "Hello Grandmother!" << endl;
    
        else if (name == "blaine")
            cout << "Hello Dad!" << endl;
    
        else if(name == "alaina")
            cout << "Hello sissy!" << endl;
    
    
        else
            cout << "NOPE. " << endl;
        
        
        cout << "Enter name: " << endl;
        cin >> name;
        
    }
}
