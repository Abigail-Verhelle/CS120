#include <iostream>
using namespace std;
int main()
{
    string name[100];
    int number[100];
    int size = 0;
    string input;
    int Quit = 0;
    cout << "How many employees? ";
    cin >> size;
    cout << endl;
    cout << "Enter employee names and numbers:" << endl;
    
    for (int i = 0;i < size;i++ )
    {
        cin >> name[i];
        cin >> number[i];
    }
    cout << endl;

    cout << "Enter a name, or Quit to stop the program.";
    cout << endl;
    cout << "Name? ";
    cin >> input;
    
    while (input != "Quit")
    {
        for (int y =0; y < size;y++ )
        {
            if (name[y] == input)
                cout << name[y] << " is employee number " << number[y] << endl;
        }
    cout << endl;
    
    cout << "Name? ";
    cin >> input;
    }
    
}
    


