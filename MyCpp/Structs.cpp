#include<iostream>
using namespace std;

//Note:
//Backwards compatility
//variable and methods are public always
// Never use inheritance
// Data in Game use Struct
// Functionality in Game use Class

struct Data
{
	int age=25;
private:
	string name;
};

void OutputStruct()
{
	Data data;
	data.age;
}