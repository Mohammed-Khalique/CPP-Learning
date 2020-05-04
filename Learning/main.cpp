#include <iostream>
#include <cmath>
using namespace std;



int main()
{
bool ismale = false;
bool istall = true;

    if(ismale && istall)
    {cout << "you are a tall male";}
    else if (ismale)
    {cout << "you are a small male";}
    else if (istall)
    {cout << "you are not male but tall";}
    else
    {cout << "you are not male or tall";}


    return 0;
}

