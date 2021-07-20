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


void OutputConstructor()
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
	float position;

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
		if(rewards.size())
		for (string playerRewards : rewards)
		{
			cout << playerRewards<<endl;
		}
		else
		{
			cout << "No achievements" << endl;
		}
	}

	void AddRewards(string name)
	{
		rewards.push_back(name);
	}

	void Currentposition()
	{
		if (position > 3)
			cout << Name << " is moving fast";
		else
			cout << Name << " is too slow";
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
	PlayerData(string name, int kill, int death): Data(name,kill,death){}

	void InGameStatus()
	{
		cout <<Name<<" Game Status: Player is Moving"<<endl;
		position++;
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

#pragma region Polymorphism

class EnemyData : public Data
{
public:
	EnemyData(string name, int kill, int death) : Data(name, kill, death){}

	void InGameStatus()
	{
		cout << Name << " Game Status: Enemy is Moving" << endl;
		position++;
	}
};

void OutputPolymorphism()
{
	cout << "\nPolymorphism Output" << endl;
	PlayerData playerData("Bean", 12, 3);
	playerData.InGameStatus();
	playerData.InGameStatus();
	playerData.InGameStatus();
	playerData.InGameStatus();
	playerData.InGameStatus();
	playerData.AddRewards("Brave Solider");
	playerData.AddRewards("Unbeatable");
	playerData.GetInfo();

	Data* pdata = &playerData;
	playerData.Currentposition();

	cout << "\n--------------------------" << endl;

	EnemyData enemyData("Kali", 8, 1);
	enemyData.InGameStatus();
	enemyData.GetInfo();
	
	Data* edata = &enemyData;
	enemyData.Currentposition();

}

#pragma endregion

int main()
{
	OutputPolymorphism();
	cin.get();
}