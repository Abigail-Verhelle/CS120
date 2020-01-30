#include <iostream>
using namespace std;

string score(string hidden, string guess)
{
   //variables
    int answer[4] = {0,0,0,0};
    string Answer = "";
    bool used = false;
    int exact = 0, kinda = 0;
    
    for (int i = 0; i <  4; i++)
    {
        //checking for place and color value
        if (hidden[i] == guess[i])
        {
            answer[i] = 1;
            used = true;
        }
        //check against rest
        if (used != true)
        {
            for (int p = 0; p < 4 && used != true; p++)
            {
                if (guess[i] == hidden[p] && answer[p] == 0)
                {
                    answer[p] = 2;
                    used = true;
                    
                }
            }
        }
        used = false;
            
    }
    // bool
    used = false;
    // answer
    for (int h = 0; h < 4; h++)
    {

            if (answer[h] == 1){
                exact ++;
            }
            else if (answer[h] == 2){
                kinda ++;

            }
    }

    Answer += (char)(exact += 48);
    Answer += ',';
    Answer += (char)(kinda += 48);
    return Answer;
}

int main()
{
    string secret = "BWBG";
    
    cout << score(secret,"RBRW") << endl; // should answer 0,2
    cout << score(secret,"WBGB") << endl; // should answer 0,4
    cout << score(secret,"BBBB") << endl; // should answer 2,0
    cout << score(secret,"BWGW") << endl; // should answer 2,1
    cout << score(secret,"BWGB") << endl; // should answer 2,2
    cout << score(secret,"BWBG") << endl; // should answer 4,0
}

