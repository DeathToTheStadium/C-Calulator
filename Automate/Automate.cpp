// Automate.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "calculator.h"
using namespace std;

double calculator::calculate(double a,char operand, double b) 
{
	switch (operand)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	case '?':
		return '0';
	default:
		return '0';
	};
};

int main() {
	double a = 0.0 ,b = 0.0 ,result = 0;
	char oper = '?';
	
	calculator operation;
	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
		<< endl;
	while (true)
	{
		string line;
		cout << "operation: ";
		cin >> a >> oper >> b;
		result = operation.calculate(a, oper, b);
		if (result != '0') {
			cout << result << endl;
		}
		else if(result == '0') {
			cout << "error Code: 1; Operation Misformatted in previous line";
			return -1;
		};
	};
	return 0;
};