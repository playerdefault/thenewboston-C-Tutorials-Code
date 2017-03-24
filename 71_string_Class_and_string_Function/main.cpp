#include <iostream>
#include <string> //Gives you string Functions
using namespace std;

int main()
{
    /*
    string bucky;
    cin >> bucky; //Whenever you are using 'cin', the end of the input is determined by the first whitespace character
    cout << "The string I entered is " << bucky;
    */

    string x;
    getline(cin, x); //End of the input is determined by a newline character
    cout << x << endl;

    string s1("hampster "); //Created a string s1 containing hampster, using a constructor of the string class
    string s2; //created an empty string
    string s3;

    s2 = s1;  //Simple way to copy
    s3.assign(s1); //Another way to copy

    cout << s1 << s2 << s3 << endl;

    //Strings are indeed arrays of characters

    string S1 = "omgwtfbbq";
    cout << S1.at(3) << endl; //'at' function tells what is the character at that place of the array

    for(int x=0; x<S1.length(); x++){ //length function gives the length of the string

        cout << S1.at(x);

    }

}
