#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
        string colors[100] = {};
        numbers[100] = {0};
        string cars = "";
        size = 0;
        colorsize = 0;
        bool used = false;
        
        //INPUT
        cout << "This program sizes cars by color.\nUse 'quit' to stop." << endl;
        cin >> cars;
        
        //numbers[0] = 1;
        
        //loop Input
        while (cars != "quit")
            {
                    size++;
                    
                    //check if used
                    for (int i = 0; i < colorsize; i++)
                        {
                                if (cars == colors[i])
                                    {
                                            //test cout << cars << " incremented" << endl;
                                            numbers[i]++;
                                            used = true;
                                            //test cout << "used are " << numbers[i] << " " << cars << " cars" << endl;
                            
                                    }
                            }
                    
                    //new color
                    if (used == false)
                        {
                                //test cout << cars << " added to the array" << endl;
                                colors[colorsize] = cars;
                                colorsize++;
                                numbers[colorsize-1]++;
                                //test cout << "used are " << numbers[colorsize] << " " << cars << " cars" << endl;
                                //test cout << colorsize << endl;
                            }
                    
                    
                    cin >> cars;
                    used = false;
                    
                }
        
        //total
        cout << endl << size << " cars recorded" << endl;
        
        //OUTPUT
        for (int i = 0; i < colorsize; i++)
            {
                    cout << endl << setw(2) << numbers[i] << " " << colors[i];
                }
        
       
        
}
