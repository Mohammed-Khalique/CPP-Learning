#include <iostream>
#include <cmath>
using namespace std;

void hello(string name, int age);
int main()
{
hello("bob", 69);
hello("ross", 46);
hello("dan", 18);
    return 0;
}
void hello(string name, int age){
cout << "hello " << name << " are you "<< age<<"?" << endl;}
