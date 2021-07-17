#include<iostream>
#include<list>
using namespace std;

class GameGenre
{
public:
	string GameName;
	string GameDeveloper;
	int GameCopies=0;
	list<string> GameSoldCopies;

	GameGenre(string name)
	{
		GameName = name;
	}
};

int main()
{
	GameGenre gameGenre("Read Dead Redemption");
	gameGenre.GameSoldCopies.push_back("I am back");
	gameGenre.GameDeveloper = "Rockstar North";
	gameGenre.GameCopies = 1000;
	gameGenre.GameSoldCopies = { "Hundered","Million","Billion"};

	cout << "Game Name: " << gameGenre.GameName << endl;
	cout << "Number of copies sold" << endl;
	for (string title : gameGenre.GameSoldCopies)
	{
		cout << title<<endl;
	}

	cin.get();
}