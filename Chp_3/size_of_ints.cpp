// Lesson 3, Question 2 (Page 62)

/* Write a program that demonstrates the size of an unsigned integer and a normal integer 
are the same, and that both are smaller in suze than a long integer. */

#include <iostream>
using namespace std;

int main() {

	cout << "The size of unsigned integer is: " << sizeof(unsigned int) << " and is equal to " <<
	"the size of a regula int: " << sizeof(int) << " where both are smaller than the size" << 
	" the size of a long integer: " << sizeof(long long) << endl;
}