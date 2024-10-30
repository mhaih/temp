/* Write a program that asks the user to enter a number, and then enter a second number.
 The program should tell the user what the result of adding and subtracting the two numbers is.*/

#include <iostream>
#include "atk.h"
int main()
{

    int num1{}, num2{};

    std::cout << "Enter a number: "; 
    std::cin >> num1;

    std::cout << "enter another number: ";
    std::cin >> num2;

    std::cout << "summation: " << num1 + num2 << ".\n" << "subtraction num1-num2: " << num1 - num2 << ".";
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
    return 0;
}

