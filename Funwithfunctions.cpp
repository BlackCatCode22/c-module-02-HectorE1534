#include <iostream>
using namespace std;

int getAnIntFromTheUser() {
    int input;
    cout << "Enter 2 integers: ";
    cin >> input;
    return input;
}

void compareTwoInts(int a, int b) {
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else if (a < b) {
        cout << a << " is less than " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }
}

int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {

    int firstInt = getAnIntFromTheUser();
    
    int secondInt = getAnIntFromTheUser();

    compareTwoInts(firstInt, secondInt);

    int sum = sumTwoInts(firstInt, secondInt);
    cout << "The sum of " << firstInt << " and " << secondInt << " is: " << sum << endl;

    return 0;
}