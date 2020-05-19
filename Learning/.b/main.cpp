#include <iostream>
#include <string>

using namespace std;

void question(){

    string yesorno = "y";

    while(yesorno == "y" ){

    string pw;
    int length;
    cout << "Please Enter A Password Within 1-10:";
    //getline(cin, pw);
    cin >> pw;
    length = pw.size();

    if( length > 10){cout << "This Is Too Long" << endl;}
    else if(length <= 5){cout << "This Password Is Weak" << endl;}
    else if(length <= 10){cout << "This Password Is Medium" << endl;}
    else{cout << "invalid";}

    cout << "Would You Like To Try Another Password (y/n)" << endl;
    cin >> yesorno;

    }



}




int main()
{
    question();








    return 0;
}
