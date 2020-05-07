#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    cout <<"Pick A Number Between 1-100\n--------------"<< endl;
    int secretnum = 69;
    int guess;
    int guesscount = 0;
    int guesslimit = 5;

    bool outofguesses = false;

    while(secretnum != guess && !outofguesses){
    if(guesscount < guesslimit)
    {cout << "Enter A Number: ";
    cin >> guess;
    guesscount++;}
    else{outofguesses = true;}
    }
    if(outofguesses)
    {cout << " \nYou Lose";}
    else{cout << " \nYou Win";}

   return 0;
}

