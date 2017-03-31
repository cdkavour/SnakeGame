#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <time.h>

using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;

    srand(time(NULL));
    fruitX = rand() % (width - 1) + 1;
    fruitY = rand() % (height - 1) + 1;
    score = 0;

}
void PrintCeiling() {
    for(unsigned int i = 0; i < width; ++i) {
        cout << "#";
    }
    cout << endl;
}
void PrintWalls() {
    for(unsigned int i = 0; i < height; ++i) {
        for(unsigned int j = 0; j < width; ++j) {
            if(j == 0 || j == width - 1) cout << "#";
            else if(i == y && j == x) cout << "O";
            else if(i == fruitX && j == fruitY) cout << "F";
            else cout << " ";
        }
        cout << endl;
    }
}
void PrintFloor() {
    PrintCeiling();
}
void Draw() {
    system("clear");
    PrintCeiling();
    PrintWalls();
    PrintFloor();
}
void Input() {

}
void Logic() {

}

int 
main() {
    Setup();
    Draw();
    return 0;
}
