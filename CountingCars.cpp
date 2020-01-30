#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int red=0,white=0,blue=0,green=0,total=0;
    string color;
    
     // output
    cout << "This program counts cars by color." << endl;
    cout << " Use quit to stop." << endl;
    cin >> color;
    
    // cout the cars
    while (color != "quit" ){
        
        if (color == "red"){
            red++;
        }
        else if(color == "blue"){
                blue++;
        }
        else if(color == "green"){
            green++;
        
        }
        else{
            white++;
        }
        

        cin >> color;
    }
    
    // find the totoal and outut the info
    total = red + blue + green + white;
    cout << endl;
    cout << total << " cars recorded"<< endl;
    
    cout << endl;
    
    cout << "Color     Count"<< endl;
    cout << "--------  -----" << endl;
    // twelve spaces;red white blue green
    cout << "red" << setw(12)<< red << endl;
    cout << "white" << setw(10)<< white << endl;
    cout << "blue" << setw(11)<< blue << endl;
    cout << "green" << setw(10)<< green << endl;
    
    //The End 
}
