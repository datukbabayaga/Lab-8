// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() 
{
	char coin;
	cout << "Please choose H (head) or T (tail) :" << endl;
	cin >> coin;
	
	int random = rand() % 1 + 1;
	if ((coin == 'H' || coin == 'h') && random == 1)
	{
		cout << "You win!" << endl;
	}
	else if ((coin == 'T' || coin == 't') && random == 0) 
	{
		cout << "You win" << endl;
	}
	else {
		cout << "You lose (fml)" << endl;
	}

	return 0;
}


