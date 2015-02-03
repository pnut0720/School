//
// This is example code from Chapter 5.7 "Logic Errors" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include <iostream>
#include <vector>

using namespace std;

//------------------------------------------------------------------------------

int main()
{
	vector<double> temps; // temperatures

	double temp = 0;
	double sum = 0;
	double high_temp = 0;
	double low_temp = 0;
	double newTemp = 0;

	cout << "Please enter a temperature or enter end ";
	
	temps = cin >> temp;
	
	for (int i = 0; i < temps.size(); ++i)
	{
		if (temps[i] > high_temp)
			high_temp = temps[i];  // find high

		if (temps[i] < low_temp)
			low_temp = temps[i];  // find low

		sum += temps[i];      // compute sum
	}

	cout << "High temperature: " << high_temp << endl;
	cout << "Low temperature: " << low_temp << endl;
	cout << "Average temperature: " << sum / temps.size() << endl;
}

//------------------------------------------------------------------------------
