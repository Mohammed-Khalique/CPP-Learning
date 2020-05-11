#include <iostream>

using namespace std;
class phone{
public:
    string name;
    string models;
    string colour;
};
int main()
{
    phone phone1;
    phone1.name = "Apple";
    phone1.models = "IPhone 11 Pro Max";
    phone1.colour= "red";

    phone phone2;
    phone2.name = "Samsung";
    phone2.models = "Samsung S20 Ultra";
    phone2.colour = "black";

    cout << phone2.models;

    return 0;
}
