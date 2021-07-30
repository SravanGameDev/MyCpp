#pragma once
#include<iostream>
using namespace std;

class Entity
{
public: 
	string GetName() { return "Entity"; }

};

class Player : public Entity
{
private: 
	string m_Name;

public:
	Player(const string& name) : m_Name(name)
	{

	}

	string GetName() { return m_Name; }
};

int main()
{
	Entity e;
	cout<<e.GetName()<<endl;

	Player p("Bandit");
	cout<<p.GetName();

	std::cin.get();
}