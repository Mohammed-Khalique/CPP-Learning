#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){

    string yesorno = "y";

    while(yesorno == "y" ){

    string pw;
    int length;
    cout << "Please Enter A Password Within 1-10:";
    cin >> pw;
    length = pw.size();
    bool gg = false;
    if (std::string::npos != pw.find_first_of("0123456789"))
    {gg = true;}
    else{gg = false;}

    if( length > 10){cout << "This Is Too Long" << endl;}
    else if(length <= 5 && gg == false){cout << "This Password Is Bad" << endl;}
    else if(length <= 5 && gg == true){cout << "This Password Is Weak" << endl;}
    else if(length <= 10 && gg == false){cout << "This Password Is Medium" << endl;}
    else if(length <= 10 && gg == true){cout << "This Password Is Strong" << endl;}
    else{cout << "invalid";}

    cout << "Would You Like To Try Another Password (y/n)" << endl;
    cin >> yesorno;

    }
    return 0;
}
