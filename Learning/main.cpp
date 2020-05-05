#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1, num2;
    char op;


     cout << "Enter First Number: ";
     cin >> num1;
     cout << "Enter Operator: ";
     cin >> op;
     cout << "Enter Second Number: ";
     cin >> num2;
     double result;
     if(op == '+'){result = num1 + num2;}
else if(op == '-'){result = num1 - num2;}
else if(op == '*'){result = num1 * num2;}
else if(op == '/'){result = num1 / num2;}
     else{cout << "invalid operator";}
     cout << "This Equals " << result;
   return 0;
}

