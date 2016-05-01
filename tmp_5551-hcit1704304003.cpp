#include<iostream>
#include<iomanip>
using namespace std;

	// This program uses 2 functions that are conditional//
	// Both functions compute total returns for the parameters//
	// The inpatient function contains an extra parameter//
double opatient(double, double);
double inpatient(int, double, double, double);
double inpatient(int days, double room, double medc, double labf)
{
	cout << "Number of days in the hospital:";
	cin >> days;
	cout << "Daily room rate:";
	cin >> room;
	cout << "Medication charges:";
	cin >> medc;
	cout << "Lab fees and other service charges:\n";
	cin >> labf;
	double total = ((room * days) + (room + medc));
	if (medc < 0)
	{
		do
		{
			cout << "Medication charges must be zero or more: Please re-enter:";
			cin >> medc;
		}
		while (medc < 0);
	}
	cout << "The total charges are:" << "$" << total;
}

double opatient(double medc, double labf)
{
	double total;
	cout << "Medication charges:";
	cin >> medc;
	cout << "Lab fees and other service charges:\n";
	total = (medc + labf);
	cin >> labf;
	if (medc < 0)
	{
		do
		{
			cout << "Medication charges must be zero or more: Please re-enter:";
			cin >> medc;
		}
		while (medc < 0);
	}
	cout << "The total charges are:" << "$" << total;

}

int main()
{
	int d;
	double c;
	double r;
	double p;
	string type;
	 cout << "This program will compute patient hospital charges:\n";
	cout << "What was the patient type:Inpatient or Outpatient?(I or O).\n";
	cin >> type;
	if (type == "i" || type == "I")
	{
		inpatient(d, c, r, p);
	}

	else if (type == "O" || type == "o")
	{
		opatient(c, r);
	}
}