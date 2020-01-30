#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string input = "";
    string color[100];
    int number[100] = {0};
    int size = 0;
    int total = 0;
    bool used = true;
    
    //input
    //cout << "This program sizes cars by color." << endl;
    //cout << " Use quit to stop." << endl;
    cin >> input;

    //loop for rest of input
    while (input != "quit")
    {
        total++;
        for (int x = 0; x < size; x++)
        {
            //same color and adding to number
            if (input == color[x])
            {
                number[x]++;
                used = false;
            }
        }
        //input is different
        if (used)
        {
            size++;
            color[size-1] = input;
            number[size-1]++;
        }
        //new input
        cin >> input;
        used = true;
    }
    
    //output
    cout << endl;
    cout << total << " cars recorded" << endl;
    cout << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << setw(2) << number[i] << " " << color[i] << endl;
    }
}
    
    

