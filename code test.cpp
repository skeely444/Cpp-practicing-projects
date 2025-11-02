#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to my first program. It's really simple and just checks if two numbers subtracted are equal to one." << endl;
    cout << "Please enter your first number";
    int firstNumber;
    cin >> firstNumber;
    cout << "Please enter your second number";
    int secondNumber;
    cin >> secondNumber;
    int result = firstNumber - secondNumber;
    switch (result) {
        case 1:
        cout << "Congradsulations, the result is equal to 1";
        break;
           default:
           cout << "Sorry, the result isn't 1";
    }
}