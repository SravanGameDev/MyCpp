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

class Data
{
private:
	int Kills;
	int Deaths;
	list<string> rewards;
	
protected:
	string Name;

public:
	Data(string name, int kill, int death)
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
	}

	void AddRewards(string name)
	{
		rewards.push_back(name);
	}

};

void OutputEncapsulation()
{
	cout << "Encapsulation Output"<<endl;
	Data player1("Bean", 10, 2);
	player1.AddRewards("Brave Solider");
	player1.AddRewards("Unbeatable");

	player1.GetInfo();
}

#pragma endregion

#pragma region Inheritance

class PlayerData: public Data
{
public:
	PlayerData(string name, int kill, int death): Data(name,kill,death)
	{

	}

	void InGameStatus()
	{
		cout <<Name<<" Game Status: Player is Moving"<<endl;
	}

	
};

void OutputInheritance()
{
	cout << "Inheritance Output" << endl;

	PlayerData playerData("Bean", 12, 3);
	playerData.AddRewards("Brave Solider");
	playerData.AddRewards("Unbeatable");
	playerData.InGameStatus();
	playerData.GetInfo();
}

#pragma endregion


int main()
{
	OutputInheritance();

	cin.get();
}