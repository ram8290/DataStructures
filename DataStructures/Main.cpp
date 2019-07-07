#include <iostream>
#include <stack>
#include <queue>
#include "dataStructures.h"

using namespace std;

int main()
{
	Stack sNum1;
	Queue qNum1;

	stack<int> sNum2;
	queue<int> qNum2;

	const int MAX_ARRAY_NUM_SIZE = 5;
	bool exit = false;
	int x = 0;
	int n;

	cout << "\t\tWelcome to the ARRAYS num list without STL!\n\n";
	cout << "Lets make a list of 5 numbers in a STACK.\n";
	cout << "Then we can see them and change the list.\n";

	for (int i = 0; i < MAX_ARRAY_NUM_SIZE; i++)
	{
		cout << "\nValue for #" << i + 1 << "?\n";
		
		while (!(cin >> x))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Incorrect input, please enter again:\n";
		}

		sNum1.push(x);
	}

	cout << "\n\nNow that we have the STACK list what would you like to do?\n";
	
	do
	{
		cout << "1: Peek at number.\n";
		cout << "2: Size of list.\n";
		cout << "3: Remove last number.\n";
		cout << "4: Move on to the next set.\n";
		
		cin >> n;

		switch (n)
		{
		case 1: cout << "\nThe last number in the list in \"" << sNum1.peek() << "\"\n\n"; break;
		case 2: cout << "\nThe size of the current list is \"" << sNum1.size() << "\"\n\n"; break;
		case 3: cout << "\nRemoved the last number and now the top is \"" << sNum1.pop() << "\"\n\n"; break;
		case 4: exit = true; break;
		}
	} while (exit != true);

	cout << "Lets make a list of 5 numbers in a QUEUE now.\n";

	for (int i = 0; i < MAX_ARRAY_NUM_SIZE; i++)
	{
		cout << "\n\nValue for #" << i + 1 << "?\n";

		while (!(cin >> x))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Incorrect input, please enter again:\n";
		}
		qNum1.shift(x);
	}

	cout << "\n\nNow that we have the QUEUE list what would you like to do?\n";
	exit = false;

	do
	{
		cout << "1: Peek at number.\n";
		cout << "2: Size of list.\n";
		cout << "3: Remove last number.\n";
		cout << "4: Move on to the next set.\n";

		cin >> n;

		switch (n)
		{
		case 1: cout << "\nThe first number in the list in " << qNum1.get_front() << "\n\n"; break;
		case 2: cout << "\nThe size of the current list is " << qNum1.size() << "\n\n"; break;
		case 3: cout << "\nRemoved the first number and now the top is " << qNum1.unshift() << "\n\n"; break;
		case 4: exit = true; break;
		}
	} while (exit != true);

	cout << "\n\n\tNow we can make ARRAYS with the STL.\n";
	cout << "Lets make a list of 5 numbers in a STACK.\n";
	cout << "Then we can see them and change the list.\n";

	for (int i = 0; i < MAX_ARRAY_NUM_SIZE; i++)
	{
		cout << "\nValue for #" << i + 1 << "?\n";

		while (!(cin >> x))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Incorrect input, please enter again:\n";
		}
		sNum2.push(x);
	}

	cout << "\n\nNow that we have the STACK list what would you like to do?\n";
	exit = false;

	do
	{
		cout << "1: Peek at number.\n";
		cout << "2: Size of list.\n";
		cout << "3: Remove last number.\n";
		cout << "4: Move on to the next set.\n";

		cin >> n;

		switch (n)
		{
		case 1: cout << "\nThe first number in the list in " << sNum2.top() << "\n\n"; break;
		case 2: cout << "\nThe size of the current list is " << sNum2.size() << "\n\n"; break;
		case 3: cout << "\nRemoved the first number "; sNum2.pop(); cout << ",now the top number is " << sNum2.top() << "\n\n"; break;
		case 4: exit = true; break;
		}
	} while (exit != true);

	cout << "Lets make a list of 5 numbers in a QUEUE now.\n";

	for (int i = 0; i < MAX_ARRAY_NUM_SIZE; i++)
	{
		cout << "\n\nValue for #" << i + 1 << "?\n";

		
		qNum2.push(x);
	}

	cout << "\n\nNow that we have the QUEUE list what would you like to do?\n";
	exit = false;

	do
	{
		cout << "1: Peek at number.\n";
		cout << "2: Size of list.\n";
		cout << "3: Remove last number.\n";
		cout << "4: Move on to the next set.\n";

		cin >> n;

		switch (n)
		{
		case 1: cout << "\nThe first number in the list in " << qNum2.front() << "\n\n"; break;
		case 2: cout << "\nThe size of the current list is " << qNum2.size() << "\n\n"; break;
		case 3: cout << "\nRemoved the first number "; qNum2.pop(); cout << ",now the top number is " << qNum2.front() << "\n\n"; break;
		case 4: exit = true; break;
		}
	} while (exit != true);

	cout << "Thanks for testing out my code tata\n\n";

	system("pause");
	return 0;
}