#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1("Hi my name is Bucky and I love bacon and ham");

    cout << s1 << endl;
    s1.erase(20); //erase function starts erasing from the input number of character INCLUDING the input number character. So, in this sentence, it WILL erase the 20th character

    cout << s1 << endl; //new string after erasing

    s1.replace(14, 5, "Samuel Jackson"); //The replace function replaces the characters. It takes 3 parameters: the starting character number, the number of characters from that starting point to be replaced, and, the string that it will be replaced with

    cout << s1 << endl;

    s1.insert(14, "lucky ");// insert Function inserts a string in another string. It takes 2 parameters: at what location to insert and what string to insert.

    cout << s1 << endl;
}
