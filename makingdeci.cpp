// Math Tutor using Class, Methods//
// Using seed time&rand()//
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class calc
{
	int choice;
	int num = rand() % 10;
	int num1 = rand() % 10;
	int indie = (num + num1);
	int indie2 = (num - num1);
	int indie3 = (num * num1);
	int indie4 = 4;
	string add = "1:ADDITION\n";
	string sub = "2:SUBTRACTION\n";
	string multi = "3:MULTIPLICATION\n";
	string endp ="4:RESET OR END PROGRAM\n";
	string q = "ENTER A CHOICE";
	string q2 = "WHAT IS";
  public:
	void run()
	{
		int seed = time(0);
		  srand(seed);
		  cout << add << sub << multi<<endp;
		  cout << q;
		  cin >> choice;
		switch (choice)
		{
		case 1:
			cout << q2 << num << "+" << num1;
			cin >> choice;
			if (choice == indie)
			{
				cout << "Correct";
			}
			else
			{
				cout << "WRONG TRY AGAIN";
				run();
			}
		 case 2:
			cout << q2 << num << "-" << num1;
			cin >> choice;
			if (choice == indie2)
			{
				cout << "Correct";
			}
			else
			{
				cout << "WRONG TRY AGAIN";
				run();
			}
		case 3:
			cout << q2 << num << "*" << num1;
			cin >> choice;
			if (choice == indie3)
			{
				cout << "Correct";
			}
			else
			{
				cout << "WRONG TRY AGAIN";
				run();
			}
		case 4:
				run();
		}
	};
};

int main()
{
	calc c;
	c.run();
}