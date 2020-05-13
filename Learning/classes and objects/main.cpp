#include <iostream>
#include <cmath>
using namespace std;
class phone{

private:
    string colour;

public:
    string name;
    string models;
    int year;


    phone(string aname, string amodels, string acolour, int ayear){
    name = aname;
    models = amodels;
    setcolour(acolour);
    year = ayear;}

    void setcolour(string acolour){
    if(acolour == "silver" || acolour == "black" || acolour == "grey" || acolour == "invalid")
       {colour = acolour;}
       else {colour = "invalid";}
    }
    string getcolour(){return colour;}

};

int main()
{
    phone phone1("Apple", "IPhone 11 Pro Max", "silver",2018);
    phone phone2("Samsung", "Samsung S20 Ultra", "black",2020);

    //phone1.setcolour("yellow");

    cout << phone1.getcolour();


    return 0;
}
