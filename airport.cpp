#include <iostream>
using namespace std;

int priceforparking (int hour)
{
    int price = 0;
    if (hour <= 30 )
        return price = 0;
    if (hour > 30 && hour <= 60)
        return price = 2;
    if (hour > 60 && hour <= 420)
    {
        price = 2;
        int r = (hour - 60) % 30;
        int n = (hour - 60) / 30;
        if (r == 0)
        {
            return price + n;
        }
        return price + n + 1;
        
    }
   
    if (hour >= 420 && hour < 1440)
    {
       
        price = 14;
        int p = (hour - 420) % 60;
        int e = (hour - 420) / 60;
        if (p == 0)
        {
        return price + e;
        }
        price = price + e + 1;
        if(price > 21)
            return 21;
        return price;
    }
    return 21;
}
int main()
{
    int hour = 0;
    cout << "Enter parking duration (in minutes): ";
    cin >> hour;
    int total = priceforparking(hour);
    cout << "Parking cost = $" << total << endl;
}
