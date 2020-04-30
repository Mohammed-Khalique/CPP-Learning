#include <iostream>

using namespace std;

int add(int a, int b);

int main()
{

    int firstNumber, secondNumber;
    cout << "Enter a number: " << endl;
    cin >> firstNumber;
    cout << "You entered: " << firstNumber << endl;

    cout << "Enter a second number: " << endl;
    cin >> secondNumber;
    cout << "You entered " << secondNumber << endl;

    cout << "Apparently the calculation two adding them is " << add(firstNumber, secondNumber) << endl;

    return 0;
}



int add(int a, int b){
    return a + b;
}


