#include <iostream>

using namespace std;



int main()
{
string colour, noun, thing;

cout << "enter a colour: ";
getline(cin, colour);
cout << "enter a noun: ";
getline(cin, noun);
cout << "enter a thing: ";
getline(cin, thing);

cout << "-------------------" << endl;

cout << "roses are " << colour << endl;
cout << noun << " are blue" << endl;
cout << "I love " << thing << endl;
    return 0;
}

