// L6-functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(int x, int y);

int main()
{
    int x = 5, y = 10;

    std::cout << "main() before swap x = ";
    std::cout << x << " y: " << y << " \n";

    swap(x, y);

    std::cout << "main() after swap x = ";
    std::cout << x << " y: " << y << " \n";

    return 0;
}

void swap(int x, int y) 
{
    int temp;

    std::cout << "Swap. Before swap, x = ";
    std::cout << x << " y: " << y << " \n";

    temp = x;
    x = y;
    y = temp;

    std::cout << "After swap, x = ";
    std::cout << x << " y: " << y << " \n";
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
