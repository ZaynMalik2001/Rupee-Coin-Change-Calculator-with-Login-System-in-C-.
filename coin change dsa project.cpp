#include <iostream>
#include <string>

using namespace std;

const int rupee[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000}; // Available rupee denominations

int n = sizeof(rupee) / sizeof(rupee[0]);

void minCoinChange(int v)

{

	cout << "Change for " << v << " rupees:" << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		while (v >= rupee[i])
		{
			v -= rupee[i];
			cout << rupee[i] << " ";
		}
	}
	cout << endl;
	
}

int main()
{
	int v, ch;
	string A = "asadkhandkl@gmail.com";

	string P = "azharkhan123";
	do
	{
	cout << "\t||=================================================================||" << endl << endl;
	cout << "\t||         COIN CHANGE ALGORITHM MINIMUM NUMBER OF COINS           ||" << endl << endl;
	cout << "\t||=================================================================||" << endl << endl;
		cout << "\n1.Login:\n";
		cout << "0.Exit:\n";
		cout << "Enter Choice:";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter Email Id:";
			cin >> A;
			if (A == "asadkhandkl@gmail.com")
			{
				cout << "Enter Password:";
				cin >> P;
				if (P == "azharkhan123")
				{
					cout << "Enter the amount in rupees to return: ";
					cin >> v;
					minCoinChange(v);
				}
				else
					cout << "Wrong Password...";
			}
			else
				cout << "Wrong Email....";
			break;
		case 2:
			exit(0);
			break;
		default:
			cout << "Invalid Choice!!!Try Again....";
			break;
		}
	} while (ch != 0);

	return 0;
}
project name :
			Rupee Coin Change Calculator with Login System in C++.
		description:
			This C++ code allows the user to calculate the minimum number of coins required to return a certain amount in rupees using the available rupee denominations,
			 which are defined in the constant integer array rupee.
		
		The minCoinChange function takes an integer argument v representing the amount in rupees to return, and calculates the minimum number of coins needed to return
		 that amount using a greedy algorithm. The function loops over the rupee array in descending order, subtracting the largest available denomination from the 
		 remaining amount until the amount is zero.
		
		The main function contains a menu system that allows the user to input their email address and password, and then enter the amount in rupees to return.
		 The menu also includes an option to exit the program. If the email address and password entered match the pre-defined values,
		  the minCoinChange function is called with the user-inputted amount in rupees. If the email address or password is incorrect, the user is notified and prompted to try again.
