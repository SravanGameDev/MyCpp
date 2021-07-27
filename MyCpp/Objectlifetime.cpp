#include<iostream>
using namespace std;

class Entity
{
public:
	Entity()
	{
		cout << "Created Entity"<<endl;
	}
	~Entity()
	{
		cout << "Destroyed Entity" << endl;
	}
};


class ScopePtr
{
public:
	
	Entity* m_ptr;

	ScopePtr(Entity* ptr)
	{
		this->m_ptr = ptr;
	}

	~ScopePtr()
	{
		delete m_ptr;
	}
};

//stack vs heap
//smart pointers
//Stack examples: timer

void main()
{
	{
		ScopePtr ptr = new Entity();
	}
}