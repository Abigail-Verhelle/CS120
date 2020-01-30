#include <iostream>
using namespace std;
float Mean(int list[], int size)
{
    int sum = 0;
    float count = size;
    
    for (int y = 0; y < size; y++)
    {
        sum = sum + list[y];
    }
    
    return sum / count;
}

float Median(int list[], int size)
{
    for( int i = 1; i < size; i++ )
    {
        int pos = i;
        float value = list[pos];
        while( pos > 0 && value < list[pos-1] )
        {
            list[pos] = list[pos-1];
            pos--;
        }
        list[pos] = value;
    }
    //even
    if (size % 2 == 1)
    {
        float answer = list[size/2];
        return answer;
    }
    
    else
    {
        float answer = (list[size/2] + list[size/2 - 1])/2.0;
        return answer;
    }
}

float M(int list[],int size)
{
    int count = 0;
    int largest = 0;
    int mfq = 0;
    
    for (int i = 0; i < size; i++)
    {
        count = 0;
        
        for (int j = 0;j < size; j++)
        {
            if (list[j] == list[i])
            count++;
        }
        if (count > largest)
        {
            mfq = list[i];
            largest = count;
                
        }
        else if (largest == count && mfq < list[i])
            mfq = list[i];
        
    }
    return mfq;
}
    
        
float Range(int list[], int size)
{
    int largest = 0;
    int smallest = 0;
    
    for( int i = 1; i < size; i++ )
    {
        int pos = i;
        float value = list[pos];
        while( pos > 0 && value < list[pos-1] )
        {
            list[pos] = list[pos-1];
            pos--;
        }
        list[pos] = value;
    }
        return list[size-1] - list[0];
}

float Values(int list[], int size)
{
    int t = 0;
    int p = 0;
    int count[500] = {};
    int repeat[500] = {};
    bool equal = false;
    
    //loop for rest of input
    while (t < size)
    {
        t++;
        for (int h = 0; h < t-1; h++)
        {
            //same color and adding to number
            if (list[t-1] == list[h])
            {
                equal = true;
            }
        }
        //input is different
        if (equal == false)
        {
            repeat[p] = list[t-1];
            p++;
        }
        //new input
        equal = false;
    }
    return p;
}
int main()
{
    int size = 0;
    int list[500];
    
    cout << "How many numbers? ";
    cin >> size;
    
    for (int y = 0; y < size; y++)
    {
        cin >> list[y];
    }
    
    cout << "The mean value is " << Mean(list, size) << endl;
    cout << "The median value is " << Median(list, size)<< endl;
    cout << "The mode value is " << M(list, size)<< endl;
    cout << "The list range is " << Range(list,size) << endl;
    cout << "There are " << Values(list,size) << " unique values" << endl;
    
}

