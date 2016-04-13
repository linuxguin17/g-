#include<iostream>
#include<iomanip>
using namespace std;
int getEmployees();
int getDaysout(int);
double getCalcAverage(int, int);
int main()
{
	getEmployees();
}

int getEmployees()
{
	int numemp;
	string q1 = " How many employees are in the company:?";
	cout << q1;
	cin >> numemp;
	getDaysout(numemp);
	return 0;

}

int getDaysout(int numemp)
{
	string q2 = " How many days did employee:";
	int empno;
	int getdo;
	for (empno = 1; empno <= numemp; empno++)
	{
		cout << q2 << empno << "miss:";
		cin >> getdo;
	}
	getCalcAverage(getdo, numemp);
	return 0;
}

double getCalcAverage(int getdo, int numemp)
{
	double average;
	average = (numemp / getdo);
	cout << "The average number of days missed was:" << setw(3) << average;
}