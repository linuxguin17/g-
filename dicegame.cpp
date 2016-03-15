#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int magicnumber;
	int seed = time(0);
	srand(seed);
	int sum1 = rand()%10;
	cout<<"Guess The Magic Number:";
	cin>>magicnumber;
	do{
		cout<<"Wrong try again:";
		cin>>magicnumber;
	}while(magicnumber != sum1);
	if(magicnumber = sum1)
	{
		cout<<"Winner Winner Chicken Dinner";
	}
	else{
		cout<<"The magic number is"<<sum1;
	}
}