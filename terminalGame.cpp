#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to TermiGame! TermiGame is a small game played entirely in the terminal. It's really simple: you are standing in a square with X and t coordinates ranging from -25 to 25. Your goal is to find the hidden square by inputting around the map. Enjoy!" << endl;
    int coordinateX = 0;
    int coordinateY = 0;
    int hiddenSquareXCoordinate = -15;
    int hiddenSquareYCoordinate = 5;
    bool playing = true;
    while (playing) {
        cout << "Wich way would you like to move?" << endl;
        string wayToGo;
        cin >> wayToGo;
        if (wayToGo == "down") {
            cout << "how many steps would you like to go down?" << endl;;
            int stepsDown;
            cin >> stepsDown;
            for (int stepsSet = 0; stepsSet <= stepsDown; coordinateY--) {
                stepsSet++;
                cout << "You are currently on Y coordinate:" << coordinateY << endl;
            }
        } else if (wayToGo == "up") {
            cout << "how many steps would you like to go up?" << endl;
            int stepsUp;
            cin >> stepsUp;
            for (int stepsSet = 0; stepsSet <= stepsUp; coordinateY++) {
                stepsSet++;
                cout << "You are currently on Y coordinate:" << coordinateY << endl;
            }
        } else if (wayToGo == "left") {
            cout << "how many steps would you like to go to the left?" << endl;
            int stepsLeft;
            cin >> stepsLeft;
            for (int stepsSet = 0; stepsSet <= stepsLeft; coordinateX--) {
                stepsSet++;
                cout << "You are currently on X coordinate:" << coordinateX << endl;
            }
        } else if (wayToGo == "right") {
            cout << "how many steps would you like to go to the right?" << endl;
            int stepsLeft;
            cin >> stepsLeft;
            for (int stepsSet = 0; stepsSet <= stepsLeft; coordinateX++) {
                stepsSet++;
                cout << "You are currently on X coordinate:" << coordinateX << endl;
        }
    } if (coordinateX == hiddenSquareXCoordinate && coordinateY == hiddenSquareYCoordinate) {
        cout << "Good job, you found the hidden square! I really hope you enjoyed this game, have a great day!";
    }
}