#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr { 1,2,3,4,5 }; 
	int max = 0;
	int min = 0;



	for (int i = 1; i <= arr.size(); i++)
	{
		int value = 0;
		for (int j = 0; j < 4; j++)
		{
			cout << arr[j] << " ";
			value += arr[j];
		}


		cout<<" " << value << endl;
		if (value > max) max = value;
		if (value < min) min = value;
	}

	cin.get();
}
//std::iter_swap(arr.begin(), arr.end() - 1);