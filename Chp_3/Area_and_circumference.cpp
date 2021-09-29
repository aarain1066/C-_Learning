// Lesson 3, Question 3 (Page 62)

// Write a program to calculate the area and circumference of a circle where the radius is fed by the user. 

// Keep in mind, in the canon of courses 1 - 3, we haven't been given if statements, so we can't write testing yet.

#include <iostream>
using namespace std;
const float pi = (22.0 / 7)

CircleAreaCalculator(float radius) {

	float area = (pi * radius * radius);
	return area;
}

CircleCircumferenceCalculator(float radius) {

	float circumference = (2 * pi * radius);
	return circumference;
}

int main() {
	// Ask user for a radius
	cout << "Please enter a radius (must be greater than 0) " << endl;
	int userGivenRadius = 0;
	cin >> userGivenRadius;

	cout << "Given a radius of " << userGivenRadius << "The area of the circle is " << CircleAreaCalculator(userGivenRadius) <<
		"and the circumference is " << CircleCircumferenceCalculator(userGivenRadius) endl;

	return 0;
}