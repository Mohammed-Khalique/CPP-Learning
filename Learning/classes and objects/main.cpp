#include <iostream>

using namespace std;
class phone{
public:
    string name;
    string models;
    string colour;

    phone(string aname, string amodels, string acolour){
    name = aname;
    models = amodels;
    colour = acolour;
    }
};
int main()
{
    phone phone1("Apple","IPhone 11 Pro Max","red");
    phone phone2("Samsung","Samsung S20 Ultra","black");

    cout << phone2.models;

    return 0;
}
