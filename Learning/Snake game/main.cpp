#include <iostream>
#include<time.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

using namespace std;
bool GameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection {Stop = 0, Left, Right, Up, Down};
eDirection dir;
void setup(){
    GameOver = false;
    dir = Stop;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % width;
    score = 0;
}
void Draw(){
    system("cls");
    for (int i = 0; i < width+2; i++)
        cout << "#";
    cout << endl;

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(j == 0)
                cout << "#";
                cout << " ";
            if(j == width - 1)
                cout << "#";
        }
        cout << endl;
    }
}
//for (int i = 0; i < width+2; i++)
      //  cout << "#";
    //cout << endl;

int main()
{
    setup(); while (!GameOver){
        Draw();
        Input();
        logic();

    }
    return 0;
}
