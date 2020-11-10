// L5_ifStatemeny.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Ask for two numbers
	// assign the numbers to bigNumber and littleNumber
	// if bigNumber is bigger than littleNumber
	// see if they are evenly divisible
	// if they are see if they are the same number

	int firstNumber, secondNumber;
	std::cout << "Enter two numbers.\nFirst: ";
	std::cin >> firstNumber;
	std::cout << "\nSecond Number: ";
	std::cin >> secondNumber;
	std::cout << "\n\n";

	if ( firstNumber >= secondNumber )
	{
		if ((firstNumber % secondNumber) == 0)
		{
			if (firstNumber == secondNumber)
			{
				std::cout << "They are the same!\n";
			}
			else
			{
				std::cout << "They are evently divisible!\n";
			}
		}
		else
		{
			std::cout << "They are not evenly divisible!\n";
		}
	}
	else
	{
		std::cout << "Hey! The second one is larger!\n";
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
