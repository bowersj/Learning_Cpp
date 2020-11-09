// L4_statements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int myAge = 39;
    int yourAge = 39;
    std::cout << "I am:\t\t" << myAge << "\tyears old.\n";
    std::cout << "You are:\t" << yourAge << "\tyears old.\n";
    
    myAge++;
    ++yourAge;
    
    std::cout << "One year passes...\n";
    std::cout << "I am:\t\t" << myAge << "\tyears old.\n";
    std::cout << "You are:\t" << yourAge << "\tyears old.\n";

    std::cout << "Another year passes...\n";
    std::cout << "I am:\t\t" << myAge++ << "\tyears old.\n";
    std::cout << "You are:\t" << ++yourAge << "\tyears old.\n";

    std::cout << "Printing again\n";
    std::cout << "I am:\t\t" << myAge << "\tyears old.\n";
    std::cout << "You are:\t" << yourAge << "\tyears old.\n";

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
