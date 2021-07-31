#pragma once
#include<iostream>
using namespace std;

class Printable
{
public:
	virtual string GetClassName()=0;
};

class Entity: public Printable
{
public: 
	virtual string GetName() { return "Entity"; }

	string GetClassName() override {return "Entity";}	
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

	string GetClassName() override {return "Players";}
};

void PrintName(Entity* e)
{
	cout<<e->GetName()<<endl;
}

void Print(Printable* obj)
{
	cout << obj->GetClassName() << endl;
}

int main()
{
	Entity* e=new Entity();
	//cout<<e.GetName()<<endl;
	//PrintName(e);
	Print(e);

	Player* p= new Player("Player");
	//cout<<p.GetName();
	//PrintName(p);
	Print(p);

	std::cin.get();
}