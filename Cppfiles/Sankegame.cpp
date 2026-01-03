#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime> // ✅ added for time()
using namespace std;

// Game variables
bool gameOver;
const int width = 50, height = 50;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100], nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

// Function to initialize the game
void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    nTail = 0;
}

// Function to draw the game map
void Draw() {
    system("cls");

    cout << "\n******** SNAKE GAME ********\n\n";

    // Draw top wall
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    // Draw map contents
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#"; // Left wall

            if (i == y && j == x)
                cout << "O"; // Snake head
            else if (i == fruitY && j == fruitX)
                cout << "F"; // Fruit
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "o"; // Snake body
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }

            if (j == width - 1)
                cout << "#"; // Right wall
        }
        cout << endl;
    }

    // Draw bottom wall
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "\nScore: " << score << endl;
    cout << "Controls: W = UP, S = DOWN, A = LEFT, D = RIGHT, X = Exit\n";
}

// Function to handle user input
void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
        case 'A':
            if (dir != RIGHT)
                dir = LEFT;
            break;
        case 'd':
        case 'D':
            if (dir != LEFT)
                dir = RIGHT;
            break;
        case 'w':
        case 'W':
            if (dir != DOWN)
                dir = UP;
            break;
        case 's':
        case 'S':
            if (dir != UP)
                dir = DOWN;
            break;
        case 'x':
        case 'X':
            gameOver = true;
            break;
        }
    }
}

// Function to handle game logic
void Logic() {
    int prevX = tailX[0], prevY = tailY[0];
    int prev2X, prev2Y;

    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    }

    // Check collision with wall
    if (x < 0 || x >= width || y < 0 || y >= height)
        gameOver = true;

    // Check collision with itself
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;

    // Eating fruit
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

// Function to restart the game after game over
void Restart() {
    char choice;
    cout << "\nGame Over! Your final score: " << score << endl;
    cout << "Do you want to play again? (Y/N): ";
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        Setup();
        while (!gameOver) {
            Draw();
            Input();
            Logic();
            Sleep(100);
        }
        Restart();
    } else {
        cout << "\nThanks for playing! Goodbye.\n";
        // no need for exit(0)
    }
}

// Main function
int main() {
    srand(time(0));// The game is over the other
    Setup();

    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100);
    }

    Restart();
    return 0;
}
