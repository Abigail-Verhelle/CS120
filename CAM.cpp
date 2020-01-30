#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // need to declare string
    float ray[100];
    int input = 0,index = 0,cam = 0;
    float sum =0, mean = 0;
    //imput
    cout << "How many values are in the list? ";
    cin >> input;
    //for loop to input index
    for (int a = 0 ;a < input;a++){
        cin >> ray[index];
        sum = sum + ray[index];
        index++;
    }
        // calculate the mean num + num + num  sum of nums / number of number
    mean = sum/input;
    // calculate if each number is greater than the mean
        for( int l = 0; l < input; l++){
            if (ray[l] > mean ){
                cam++;
            }
        }
    
    // output
    cout << fixed;
    cout << cam << " values from the list are above the mean of " << setprecision(2)<< mean << endl;
}

