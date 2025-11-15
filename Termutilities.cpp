#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to TermUtilities! TermUtilities is an opensource tool/game pack for your terminal. The uitlities aren't too advanced since this is a C++ practice project. If you got any problems make sure to report them on my Github and enjoy!" << endl << endl;
    cout << "Please select the program you would like." << endl 
    << "TermUlator.exe" << endl 
    << "SecretSquared.exe" << endl 
    << "EconomicalCalculator.exe" << endl 
    << "S_A_D.exe" << endl;
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
    } else if (choise == "EconomicalCalculator.exe") {
        cout << "Hello and welcome to the Economical Calculator. It's a basic program that calculates if you gained or losed money." << endl;
        cout << "How much money did you make today?" << endl;
        double moneyMade;
        cin >> moneyMade;
        cout << "How much money did you spend today?" << endl;
        double moneySpend;
        cin >> moneySpend;
        double result = moneyMade - moneySpend;
        if (result > 0) {
            cout << "You gained " << result << "euros today" << endl;
        } else if (result = 0) {
            cout << "You had a break even today." << endl;
        } else if (result < 0) {
            cout << "You lost " << result << "euros today " << endl;
        }
    } else if (choise == "S_A_D.exe") {
        cout << "Welcome to S_A_D. This program can be used to calculate the optimal price per unit for your supply and demand system. Enjoy!";
        double prizePoints[] = {0.00, 2.50, 5.00, 7.50, 10.00, 12.50, 15.00, 17.50, 20.00, 22.50, 25.00, 27.50, 30.00, 32.50, 35.00, 37.50, 40.00, 42.50, 45.00, 47.50, 50.00, 52.50, 55.00, 57.50, 60.00, 62.50, 65.00, 67.50, 70.00, 72.50, 75.00};
        cout << "How many prize points are you targetting? ";
        int prizePointsTragetting;
        cin >> prizePointsTragetting;
        int offeringForPrizePoint[31];
        int askingForPrizePoints[31];
        for (int i = 0; i < prizePointsTragetting; i++) {
            offeringForPrizePoint[i] = 0;
            cout << "How many products would you like to sell for " << prizePoints[i] << " euros?" << endl;
            cin >> offeringForPrizePoint[i];
        }
        for (int i = 0; i < prizePointsTragetting; i++) {
            askingForPrizePoints[i] = 0;
            cout << "How many products does your audience ask for " << prizePoints[i] << " euros?" << endl;
            cin >> askingForPrizePoints[i];
        }
        for (int i = 0; i < prizePointsTragetting; i++) {
            if (offeringForPrizePoint[i] == askingForPrizePoints[i]) {
                cout << "The market is in balance when asking " << prizePoints[i] << " euros for " << askingForPrizePoints[i] << " items." << endl;
            }
        }
    }
}