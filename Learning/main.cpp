#include <iostream>
#include <cmath>
using namespace std;

int nums(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3){result = num1;}
    else if(num2 >= num1 && num2 >= num3){result = num2;}
    else{result = num3;}
    return result;
    }

int main()
{
    cout << nums(11, 64, 69);

    return 0;
}

