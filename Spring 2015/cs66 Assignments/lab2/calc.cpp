#include <vector>
#include <iostream>
#include <numeric>
#include <math.h>
using namespace std;

int main()
{
    vector<double> myValues;
    float myNums;
    float sum;
    float average;
    
    cout << "Please enter values (enter end at end) ==> ";
    
    while(cin >> myNums)
    {
        myValues.push_back(myNums);
    }
    
    sum = accumulate(myValues.begin(), myValues.end(), 0.0);
    
    cout << "\nSum of Numbers Entered is: " << sum << "\n";
    
    average = sum / myValues.size();
    
    cout << "\nAverage of values entered is: " << average << "\n";
    
    for(int i = 0; i < myValues.size(); i++)
    {
        double variance = (myValues[i] - average) * 2;
    }
    
}