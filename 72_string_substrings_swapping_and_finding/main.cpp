#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("OMG I thing I am preggy!!");
    cout << s1.substr(17,7) << endl; //substr is a substring function. It takes 2 parameters: 1st the beginning index and 2nd the number of characters you want to go for. It is useful whenever creating a smaller string from a bigger string

    string one("apples ");
    string two(" beans");

    cout << one << two << endl;
    one.swap(two); //swap function essentially swaps the 2 strings. It always takes 1 parameter - the string you want to swap it with. Very useful when sorting.

    cout << one << two << endl; //new strings after swapping

    string ss1("Ham is spam Oh yes I am");

    cout << ss1.find("am") << endl;  //find function gives the starting location of the first occurrence of the parameter input to it

    cout << ss1.rfind("am") << endl; //find function but works in reverse i.e. it searches from right to left or it gives the last occurrence of the parameter input. It's essentially "Reverse Find".
}
