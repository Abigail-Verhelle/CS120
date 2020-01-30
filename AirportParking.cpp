#include <iostream>
using namespace std;

int priceforparking( int price, int hour )
{
        //Price Calculations
        if (hours <= 30)
                price = 0;
            
            else if (price == 24)
            {
                    price = 21;
                return price;
            }
                else if (hours > 420)
                {
                    num = hours-420;
                    num = num/60;
                    hours = 2 + num;
                    return price;
                }
                    else if (hour = 420)
                    {
                        price = 14;
                        return price;
                    }
                
                        else if (hours > 60)
                        {
                            num  = hours - 60;
                            num = num/30;
                            price = 14 + num;
                        }
                             else if (phours > 31 && hours < 60)
                                price = 2;
    
}

    //hour Input
    cout << "Enter parking duration (in minutes): ";
    cin >> hours;
    cout << endl;
  
    answer = price of parking (hours)
    cout << "Parking cost = $ ";
    cout << answer;
        
        
}
