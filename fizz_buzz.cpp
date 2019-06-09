#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int number;
	
	while(true)
	{
		cout << "Choose a number between 1 to 9,999,999: ";
		cin >> number;
		cout << "\n";
		
		if(cin.fail() || number < 1 || number > 9999999)
		{
			cout << setfill('-') << setw(45) << "-" << endl;
			cout << "Incorrect input." << endl;
			cout << "Please enter a number between 1 to 9,999,999." << endl;
			cout << setfill('-') << setw(45) << "-" << endl;
			cout << "\n";
			cin.clear();
			cin.ignore(RAND_MAX, '\n');
			continue;
		}
		
		else
		{
			break;
		}
	}
		
	for(int i = 1; i <= number; i++)
	{
		
		if(i % 15 == 0)
		{
			cout << setfill(' ') << setw(9) << right << "FizzBuzz";
			
			if(i % 7 == 0)
			{
				cout << '\n';
			}	
		}
		else if(i % 3 == 0)
		{
			cout << setfill(' ') << setw(9) << right << "Fizz";

			if(i % 7 == 0)
			{
				cout << '\n';
			}	
		}
		else if(i % 5 == 0)
		{
			cout << setfill(' ') << setw(9) << right << "Buzz";
			
			if(i % 7 == 0)
			{
				cout << '\n';
			}	
		}
		else
		{
			cout << setfill(' ') << setw(9) << right << i;
			
			if(i % 7 == 0)
			{
				cout << '\n';
			}		
		}
	}
	cout << "\n";
}
