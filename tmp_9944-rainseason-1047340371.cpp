#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int count;
	int p = 13;
	double sum = 0;
	double monthsr[13];
	double max;
	double min;
	 double avrf;
	string month[13];
	month[1] = "January";
	month[2] = "February";
	month[3] = "March";
	month[4] = "April";
	month[5] = "May";
	month[6] = "June";
	month[7] = "July";
	month[8] = "August";
	month[9] = "September";
	month[10] = "October";
	month[11] = "November";
	month[12] = "December";
	for (count = 1; count < p; count++)
	{
		cout << "Enter the rainfall for " << month[count];
		cin >> monthsr[count];
	}
	for (count = 0; count < p; count++)
	{
		sum += monthsr[count];
	}
	for (count = 1; count < p; count++)
	{
		if (monthsr[count] > max)
		{
			max = monthsr[count];
		}

	}
	for (count = 1; count < p; count++)
	{
		if (monthsr[count] < min)
		{
			min = monthsr[0];
			min = monthsr[count ];
		}
	}

	avrf = sum / count;
	cout << "The total rainfall is:" << sum << "\n";
	cout << "The average rainfall is:" << avrf << "\n";
	cout << "The maximum rainfall is:" << max << "\n";
	cout << "The minimum rainfall is:" << min;
}