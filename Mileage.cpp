#include <iostream>
#include <iomanip>
using namespace std;
int main(){

// declare variables
    float gas=0,IO=0,FO=0,Odo=0,mpg=0,gsum=0,msum=0;

// output to get variables
    cout << " This program calculates mileage." << endl;
    cout << "Type in -1 for the odometer reading to signify the end of the program." << endl;
    cout << "Enter gallons at least once." << endl;
    cout << "Initial odometer reading: ";
    cin >> IO;
    cout << endl;
    
    cout << "Current odometer reading: ";
    cin >> FO;
    
    while ( FO != -1){
        
        cout << "Gallons of gas purchased: ";
        cin >> gas;
    // math to calulate mpg
        Odo = FO - IO;
        msum = Odo + msum;
        gsum = gas + gsum;
        mpg = Odo/gas;
        IO = FO;
    //mpg output
        cout << fixed;
        cout << "You drove " << (int)Odo << " miles averaging " << setprecision(2) << mpg <<  " mpg." << endl;
        cout << endl;

        cout <<"Current odometer reading: ";
        cin >> FO;
        
        }
    // final output
    cout << "All together, you drove " << fixed << setprecision(0) << msum << " miles on " << setprecision(2) << gsum << " gallons of gas, averaging " << setprecision(2) << msum/gsum <<  " mpg." << endl;
}
    // WE ARE DONE!

