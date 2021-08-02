#include <iostream>
#include<vector>
using namespace std;

void MinMax()
{
	vector<int> arr { 1,2,3,4,5}; 
	_int64 max = 0;
	_int64 min = 0;
	
	for (int i = 0; i < arr.size(); i++)
	{
		_int64 value = 0;
		for (int j = 0; j < arr.size(); j++)
		{
			if (j==i) continue;
			cout << arr[j] << " ";
			value += arr[j];
		}

		cout<<" " << value << endl;
		if (value > max || max == 0) max = value;
		if (value < min || min == 0) min = value;
	}

	cout << "Min" << " " << "Max"<<endl;
	cout << min<<"  " << max;
}


int main()
{
	string s = { "07:05:45PM" };

	string time;

	char am = 'A', pm = 'P';
	bool formatchange = false;
	string hours = { "12" };

	for (char i = 0; i < s.size(); i++)
	{
		if (s[i] == am || s[i] == pm)
		{
			//cout << s[i];
			formatchange = true;
		}
	}

	if (formatchange)
	{
		cout << "24 hours format";
	}
	cin.get();
}
