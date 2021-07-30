#include<iostream>
using namespace std;

class ExEntity
{
public:
	ExEntity()
	{
		cout << "Created Entity"<<endl;
	}
	~ExEntity()
	{
		cout << "Destroyed Entity" << endl;
	}
};


class ScopePtr
{
public:
	
	ExEntity* m_ptr;

	ScopePtr(ExEntity* ptr)
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

void OutputStackAndHeap()
{
	{
		ScopePtr ptr = new ExEntity();
	}
}