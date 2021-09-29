#include <iostream>

using namespace std;

void MultiplyNumbers() {

	cout << "Enter First Number: \n";
	int firstNumber = 0;
	cin >> firstNumber;

	cout << "Enter Second Number: \n";
	int secondNumber = 0;
	cin >> secondNumber;

	// Multiply Two Numbers
	int multiplcationResult = firstNumber * secondNumber;

	// Display Result
	cout << firstNumber << " x " << secondNumber;
	cout << " = " << multiplcationResult << endl;
}

int main() {

	cout << "This program will multiply two numbers for you. \n" << endl;

	// Call the func
	MultiplyNumbers();
}