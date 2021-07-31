#pragma once
#include<iostream>
using namespace std;

class Entity
{
public: 
	virtual string GetName() { return "Entity"; }

};

class Player : public Entity
{
private: 
	string m_Name;

public:
	Player(const string& name) : m_Name(name)
	{

	}

	string GetName() override { return m_Name; }
};

void PrintName(Entity* e)
{
	cout<<e->GetName()<<endl;
}

int main()
{
	Entity* e=new Entity();
	//cout<<e.GetName()<<endl;
	PrintName(e);

	Player* p= new Player("Player");
	//cout<<p.GetName();
	PrintName(p);

	std::cin.get();
}