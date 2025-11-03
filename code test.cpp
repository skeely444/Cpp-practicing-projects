#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to my second program. It's just a simple calculator you can try out. Enjoy!" << endl;
    cout << "Please enter your first number: ";
    double firstNumber;
    cin >> firstNumber;
    cout << "Please enter your second number: ";
    double secondNumber;
    cin >> secondNumber;
    cout << "Wich calculation would you like to preform?" << endl;
    string calculation;
    cin >> calculation;
    double result;
    if (calculation == "Subtract" || calculation == "subtract")
    {
        result = firstNumber - secondNumber;
        cout << "Your result is: ";
        cout << result;
    } else if (calculation == "Add" || calculation == "add") {
        result = firstNumber + secondNumber;
        cout << "Your result is: ";
        cout << result;
    } else if (calculation == "devide" || calculation == "Devide") {
        result = firstNumber / secondNumber;
        cout << "Your result is: ";
        cout << result;
    } else if (calculation == "multiply" || calculation == "Multiply") {
        result = firstNumber * secondNumber;
        cout << "Your result is: ";
        cout << result;
    }
}