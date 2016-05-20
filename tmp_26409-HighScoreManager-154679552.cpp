/*This program keeps track of players and their scores*/
/* This program uses the concepts of function prototypes with arrays*/
#include<iostream>
#include<string>
using namespace std;
void addplayer(string[11], int[11], int, int &);
void printplayscore(string[11], int[11], int, int &);
void searchforplayer(string[11], int[11], string, int, int &);
void removeplayer(string[11], int[11], string, int, int &count);

int main()
{
	int choice;
	string choice2;
	int i = 0;
	int size = 10;
	int count = 0;
	string players[size];
	int scores[size];
	do
	{
		cout << "ENTER AN OPTION\n";
		cout << "1 Add new player and score\n";
		cout << "2.Print all players and scores\n";
		cout << "3.Search for a player's score\n";
		cout << "4.Remove a player\n";
		cout << "5.Quit\n";
		cin >> choice;
		if (choice == 1)
		{
			addplayer(players, scores, size, count);
		}
		else if (choice == 2)
		{
			printplayscore(players, scores, size, count);
		}
		else if (choice == 3)
		{
			searchforplayer(players, scores, choice2, size, count);
		}
		else if (choice == 4)
		{
			removeplayer(players, scores, choice2, size, count);
		}
		else if (choice == 5)
		{
			cout << "QUIT";
		}
	}
	while (choice != 5);
}

void addplayer(string playern[11], int score[11], int size, int &count)
{
	count = 1;
	cout << "Enter new player name\n";         /* This is the entry */
	cin >> playern[count];
	cout << "Enter new player score\n";
	cin >> score[count];
	cout << score[count];
	count++;
}

void printplayscore(string playern[11], int score[11], int size, int &count)
{
	for (count = 1; count < size; count++)         /* This is the printplayer function*/
	{
		cout << "Player Scores....\n" << playern[count] << "..score.." << score[count] << "\n";
	}
}

void searchforplayer(string playern[11], int score[11], string search, int size, int &count)
{
	cout << "what player to search for"<< endl;
	cin >> search;
	cout << "Okay\n";         /* Search for Player function*/
	if (search == playern[1])
	{
		cout << "The score for"<<playern[1] << "..is" << score[1] << endl;
	}
	else if (search == playern[2])
	{
		cout <<"The score for"<< playern[2] << "..is" << score[2] << endl;
	}
	else if (search == playern[3])
	{
		cout <<"The score for"<<playern[3] << "..is" << score[3] << endl;
	}
	else if (search == playern[4])
	{
		cout <<"The score for"<<playern[4] << "..is" << score[4] << endl;
	}
	else if (search == playern[5])
	{
		cout <<"The score for"<< playern[5] << "..is" << score[5] << endl;
	}
	else if (search == playern[6])
	{
		cout <<"The score for"<<playern[6] << "..is" << score[6] << endl;
	}
	else if (search == playern[7])
	{
		cout <<"The score for"<< playern[7] << "..is" << score[7] << endl;
	}
	else if (search == playern[8])
	{
		cout <<"The score for"<< playern[8] << "..is" << score[8] << endl;
	}
	else if (search == playern[9])
	{
		cout <<"The score for"<< playern[9] << "..is" << score[9] << endl;
	}
	else if (search == playern[10])
	{
		cout <<"The score for"<< playern[10] << "..is" << score[10] << endl;
	}
	else
	{
		cout << "There is no player with that name\n" << endl;
	}
}

void removeplayer(string playern[11], int score[11], string search, int size, int &count)
{
	cout << "What Player do you want to remove" << endl;
	cin >> search;
	cout << "Okay\n";
	if (search == playern[1])         /* Remove player function*/
	{
		playern[1] = "null";
		score[1] = 0;
		count--;
		cout<<playern[1]<<"..Has been removed"<<score[1]<<endl;
	}
	else if (search == playern[2])
	{
		playern[2] = "null";
		score[2] = 0;
		count--;
		cout << playern[2] << "..Has been removed" << score[2] << endl;
	}
	else if (search == playern[3])
	{
		playern[3] = "null";
		score[3] = 0;
		count--;
		cout << playern[3] << "..Has been removed" << score[3] << endl;
	}
	else if (search == playern[4])
	{
		playern[4] = "null";
		score[4] = 0;
		count--;
		cout << playern[4] << "..Has been removed" << score[4] << endl;
	}
	else if (search == playern[5])
	{
		playern[5] = "null";
		score[5] = 0;
		count--;
		cout << playern[5] << "..Has been removed" << score[5] << endl;
	}
	else if (search == playern[6])
	{
		playern[6] = "null";
		score[6] = 0;
		count--;
		cout << playern[6] << "..Has been removed" << score[6] << endl;
	}
	else if (search == playern[7])
	{
		playern[7] = "null";
		score[7] = 0;
		count--;
		cout << playern[7] << "..Has been removed" << score[7] << endl;
	}
	else if (search == playern[8])
	{
		playern[8] = "null";
		score[8] = 0;
		count--;
		cout << playern[8] << "..Has been removed" << score[8] << endl;
	}
	else if (search == playern[9])
	{
		playern[9] = "null";
		score[9] = 0;
		count--;
		 cout << playern[9] << "..Has been removed"<< score[9] << endl;
	}
	
	else if (search == playern[10])
	{
		playern[10] = "null";
		score[10] = 0;
		count--;
		 cout << playern[10] << "..Has been removed"<< score[10] << endl;
	}
	else
	{
		cout << "There is no player with that name\n" << endl;
	}
}