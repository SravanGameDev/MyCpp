#include<iostream>
using namespace std;

void ShowMenu()
{
	cout << "********Menu********" << endl;
	cout << "1.Balance" << endl;
	cout << "2.Deposit" << endl;
	cout << "3.Withdrawn" << endl;
	cout << "4.Exit" << endl;
	cout << "********************" << endl;


}
void Logic()
{
	int option;
	float balance=500;
	char currencySymbol = '$';

	do
	{
		ShowMenu();
		cout << "Choose a option: ";
		cin >> option;
		system("cls");

		switch (option)
		{
		case 1: cout << "Your balance is: " << currencySymbol << balance << endl;
			break;
		case 2: cout << "Deposit amount: ";
			float depositAmount;
			cout << currencySymbol;
			cin >> depositAmount;
			balance += depositAmount;
			cout << "Your current balance is: " << currencySymbol << balance << endl;
			break;
		case 3: cout << "Withdraw amount: ";
			float withdrawAmount;
			cout << currencySymbol;
			cin >> withdrawAmount;
			if (withdrawAmount<=balance)
			{
				balance -= withdrawAmount;
			}
			else
			{
				cout<<"No enough money"<<endl;
			}
			cout << "Your current balance is: " << currencySymbol << balance << endl;
			break;
		}
	} while (option != 4);

	cout << "Your current balance is: " << currencySymbol << balance << endl;

	cout << endl;
	system("pause>0");
}

void main()
{
	Logic();
}