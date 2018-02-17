// RPN.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "RNPCalculator.hpp"

int main()
{
	std::cout << "Enter your formula:\n";
	std::string formula;
	std::getline(std::cin, formula);
	std::cout << "You entered " << formula << std::endl;
	RNPCalcuator calc;
	int result = calc.process_formula(formula);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;
	system("pause");
}

