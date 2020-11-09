// L3_variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "The size of an int is:\t\t"
        << sizeof(int) << " bytes.\n";
    std::cout << "The size of a short int is:\t"
        << sizeof(short) << " bytes.\n";
    std::cout << "The size of a long int is:\t"
        << sizeof(long) << " bytes.\n";
    std::cout << "The size of a char is:\t\t"
        << sizeof(char) << " bytes.\n";
    std::cout << "The size of a boolean is:\t"
        << sizeof(bool) << " bytes.\n";
    std::cout << "The size of a float is:\t\t"
        << sizeof(float) << " bytes.\n";
    std::cout << "The size of a double is:\t"
        << sizeof(double) << " bytes.\n";

    std::cout << "\n==================== ENUMS ====================\n\n";

    enum COLOR { PURPLE, RED=100, BLUE, GREEN=500, WHITE, BLACK=700 };

    std::cout 
        << "Purple:\t"  << PURPLE 
        << "\nRed:\t"   << RED 
        << "\nBlue:\t"  << BLUE 
        << "\nGreen:\t" << GREEN 
        << "\nWhite:\t" << WHITE 
        << "\nBlack:\t" << BLACK;
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
