#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to TermUtilities! TermUtilities is an opensource tool/game pack for your terminal. The uitlities aren't too advanced since this is a C++ practice project. If you got any problems make sure to report them on my Github and enjoy!" << endl << endl;
    cout << "Please select the program you would like." << endl << "TermUlator.exe" << endl << "SecretSquared.exe" << endl << "ShopUlator.exe" << endl;
    string choise;
    cin >> choise;
    if (choise == "SecretSquared.exe") {
        cout << "Welcome to SecretSquared! SecretSquard is a small game played entirely in the terminal. It's really simple: you are standing in a square with X and Y coordinates ranging from -25 to 25. Your goal is to find the hidden square by inputting around the map. Enjoy!" << endl << endl;;
        int coordinateX = 0;
        int coordinateY = 0;
        int hiddenSquareXCoordinate = -15;
        int hiddenSquareYCoordinate = 5;
        bool playing = true;
        while (playing && (coordinateX != hiddenSquareXCoordinate || coordinateY != hiddenSquareYCoordinate)) {
            cout << "Wich way would you like to move?" << endl;
            string wayToGo;
            cin >> wayToGo;
            if (wayToGo == "down") {
                cout << "how many steps would you like to go down?" << endl;;
                int stepsDown;
                cin >> stepsDown;
                for (int stepsSet = 0; stepsSet < stepsDown; coordinateY--) {
                    stepsSet++;
                    cout << "You are currently on Y coordinate:" << coordinateY - 1 << endl;
                }
            } else if (wayToGo == "up") {
                cout << "how many steps would you like to go up?" << endl;
                int stepsUp;
                cin >> stepsUp;
                for (int stepsSet = 0; stepsSet < stepsUp; coordinateY++) {
                    stepsSet++;
                    cout << "You are currently on Y coordinate:" << coordinateY + 1 << endl;
                }
            } else if (wayToGo == "left") {
                cout << "how many steps would you like to go to the left?" << endl;
                int stepsLeft;
                cin >> stepsLeft;
                for (int stepsSet = 0; stepsSet < stepsLeft; coordinateX--) {
                    stepsSet++;
                    cout << "You are currently on X coordinate:" << coordinateX - 1 << endl;
                }
            } else if (wayToGo == "right") {
                cout << "how many steps would you like to go to the right?" << endl;
                int stepsLeft;
                cin >> stepsLeft;
                for (int stepsSet = 0; stepsSet < stepsLeft; coordinateX++) {
                    stepsSet++;
                    cout << "You are currently on X coordinate:" << coordinateX + 1 << endl;
                }
            }
        }
        cout << "Congradjulations, you found the hidden square!";
    } else if (choise == "TermUlator.exe") {
        cout << "Welcome to my TermUlator program. It's just a simple calculator you can try out. Enjoy!" << endl;
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
        if (calculation == "Subtract" || calculation == "subtract") {
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
    } else if (choise == "SquareMatcher.exe") {
        cout << "Hello and welcome to the SquareMatcher. In this game you must input to array indexes. If those indexes are equal to the same number, you get a point, otherwise you may continue." << endl;
        int firstIndex[] = {5, 6, 9, 7, 3, 4, 1, 2, 8};
        int secondIndex[] = {9, 7, 5, 6, 4, 3, 1, 2, 8};
        cout << "Please enter the first index";
        int *firstChosenIndex = firstIndex;
        cout << firstChosenIndex;
    }
}