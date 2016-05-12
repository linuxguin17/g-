#include<iostream>
using namespace std;
int main()
{
	string ans[21];
	int i;
	int sum = 0;
	int numberinc = 0;
	string numberc[21];
	int count = 1;
	string drivesar[21];
	drivesar[1] = "A";
	drivesar[2] = "D";
	drivesar[3] = "B";
	drivesar[4] = "B";
	drivesar[5] = "B";
	drivesar[6] = "C";
	drivesar[7] = "A";
	drivesar[8] = "B";
	drivesar[9] = "C";
	drivesar[10] = "D";
	drivesar[11] = "A";
	drivesar[12] = "C";
	drivesar[13] = "D";
	drivesar[14] = "B";
	drivesar[15] = "D";
	drivesar[16] = "C";
	drivesar[17] = "C";
	drivesar[18] = "A";
	drivesar[19] = "D";
	drivesar[20] = "B";
	for (i = 1; i < 21; i++)
	{
		cout << "Question." << i << ":";
		cin >> ans[i];
	}
	cout << "Question that were answred correctly\n";
	for (i = 1; i < 21; i++)
	{
		if (ans[i] == drivesar[i])
		{
			sum++;
			cout << i << "\n";
		}
		else if (ans[i] != drivesar[i])
		{
			numberinc++;
		}
	}
	if (numberinc < 15)
	{
		cout << "You did not pass\n" << endl;
	}
	else if (numberinc > 15)
	{
		cout << "You passed";
	}
	cout << "The number correctly answered\n";
	cout << sum << "\n";
	cout << "The Number incorrectly answered\n";
	cout << numberinc;
}