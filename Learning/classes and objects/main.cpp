#include <iostream>
#include <cmath>
using namespace std;
class phone{
public:
    string name;
    string models;
    string colour;
    int year;


    phone(string aname, string amodels, string acolour, int ayear){
    name = aname;
    models = amodels;
    colour = acolour;
    year = ayear;}

    bool isnew(){if(year >= 2020){return true;}
    return false;}
};

int main()
{
    phone phone1("Apple", "IPhone 11 Pro Max", "red",2018);
    phone phone2("Samsung", "Samsung S20 Ultra", "black",2020);

    cout << phone1.isnew();


    return 0;
}
