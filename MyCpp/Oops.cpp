#include<iostream>
#include<list>
using namespace std;

#pragma region Constructor

class GameGenre
{
public:
	string GameName;
	string GameDeveloper;
	list<string> GameSoldCopies;

	GameGenre(string name, string developer)
	{
		GameName = name;
		GameDeveloper = developer;
	}

	void GetInfo()
	{
		cout << "Game Name: " << GameName << endl;
		cout << "Number of copies sold" << endl;
		for (string title : GameSoldCopies)
		{
			cout << title << endl;
		}
		cout<<endl;
	}
};


void GameGenreData()
{
	GameGenre action("Read Dead Redemption", "Rockstar North");
	action.GameSoldCopies.push_back("Hundered");
	action.GameSoldCopies.push_back("after a year Million");
	action.GameSoldCopies.push_back("after a decade Billion");

	GameGenre OpenWorld("GTA V", "Rockstar Games");
	OpenWorld.GameSoldCopies.push_back("Hundered");
	OpenWorld.GameSoldCopies.push_back("Close a million");

	action.GetInfo();
	OpenWorld.GetInfo();
}

#pragma endregion


#pragma region Encapsulation

class PlayerData
{
private:
	string Name;
	int Kills;
	int Deaths;
	list<string> rewards;
	
public:
	PlayerData(string name, int kill, int death)
	{
		Name = name;
		Kills = kill;
		Deaths = death;
	}

	void GetInfo()
	{
		cout << "Player Name: " << Name<<endl;
		cout << "Kills: " << Kills<<endl;
		cout << "Deaths: " << Deaths<<endl;
		cout << "Achivements:" << endl;
		for (string playerRewards : rewards)
		{
			cout << playerRewards<<endl;
		}
		cout << endl;
	}

	void AddRewards(string name)
	{
		rewards.push_back(name);
	}

};

#pragma endregion


int main()
{
	PlayerData player1("Bean", 10, 2);
	player1.AddRewards("Brave Solider");
	player1.AddRewards("Unbeatable");
	
	player1.GetInfo();

	cin.get();
}