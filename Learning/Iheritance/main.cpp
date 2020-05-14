#include <iostream>

using namespace std;

class chef{
public:
    void makepasta(){cout << "can make pasta" << endl;}
    void makeribs(){cout << "can make ribs" << endl;}
    void specialdish(){cout << "spicy fried chicken" << endl;}
};

class fivestarchef : public chef{
public:
    void makelobster(){cout << "can make lobster" << endl;}
    void specialdish(){cout << "spicy fried lamb" << endl;}
};

int main()
{
    chef.Chef
    Chef.specialdish();

    fivestarchef.Fivestarchef
    Fivestarchef.specialdish();

    return 0;
}
