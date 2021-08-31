// This is a demonstration of using dynamic arrays. Pg.75 

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> dynArray(3); // Dynamic array of int
    
    dynArray[0] = 365;
    dynArray[1] = -421;
    dynArray[2] = 789;

    cout << "Number of integers currently in the Array: " << dynArray.size() << endl;

    cout << "Enter another element to be added to the array : " << endl;
    int newNumber = 0;
    cin >> newNumber;
    dynArray.push_back(newNumber);

    cout << "New number of elements in the array " << dynArray.size() << endl;
    cout << "with the last element in the array " << dynArray[dynArray.size() - 1] << endl;
    return 0;
}