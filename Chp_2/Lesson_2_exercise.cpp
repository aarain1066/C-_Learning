#include <iostream>
using namespace std;

// Questions on Page 62 of Sam's Teach yourself C++ in one hour a day. 

// Prototypes.

float AreaFunction(int givenRadius);
float CircumferenceFunction(int givenRadius);


enum Yourcards {
    Ace = 43,
    Jack,
    Queen,
    King
};

int main() {

    cout << "The value of the Queen should be 45 ... and indeed, it is ..." << Queen << endl;

    cout << "For my next trick, I will demonstrate that the size of an unsigned it is " << sizeof(unsigned int) << " and is the " <<
        "same size of normal int which is " << sizeof(int) << ". Where they are both less than " << sizeof(long long) << endl;


    cout << "Next, I need your help. I want to find the area and the circumference of a circle, but I need you to give me the radius" << endl;
    int userRadius = 0;
    cin >> userRadius;
    cout << "Excellent, the area is " << AreaFunction(userRadius) << " and the circumference is " << CircumferenceFunction(userRadius) << endl;

    return 0;
}

float AreaFunction(int givenRadius) {

    return (3.14 * givenRadius * givenRadius);

}

float CircumferenceFunction(int givenRadius) {

    return (2 * 3.14 * givenRadius);
}