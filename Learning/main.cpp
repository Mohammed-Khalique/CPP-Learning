#include <iostream>
#include <cmath>
using namespace std;


double cube(double num){
return + num * num * num;
cout << "this line will not be printed";
}
int main()
{
 cout << cube(2.4);
    return 0;
}

