#include <iostream>
#include <string>

using namespace std;

void question(){


    string pw;
    int length;
    cout << "please enter a password within 1-10:";
    getline(cin, pw);
    length = pw.size();

    if( length > 10){cout << "This is too long";}
    else if(length <= 5){cout << "this password is weak";}
    else if(length <= 10){cout << "this password is medium";}
    else{cout << "invalid";}

    string yesorno;



}




int main()
{
    question();




    bool yesorno = true;
    while(yesorno = true)
    {
        cout << "hello";
    }



    return 0;
}
