#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream theFile("players.txt"); //Since players.txt does not exist on first run of the program, C++ is going to automatically create this file

    cout << "Enter players' ID, Name, and Money" << endl;
    cout << "press Ctrl+Z to quit\n" << endl; //Ctrl+Z gives the End-Of-File Marker

    int idNumber;
    string name;
    double money;

    while(cin >> idNumber >> name >> money){ //Means that the first thing that user enters will be stored in 'idNumber', the second thing will be stored in 'name' and the last thing is 'money'
        theFile << idNumber << ' ' << name << ' ' << money << ' ' << endl; //Data will be stored in theFile
        //Custom Data Structure helps to know what type of and what data is there in a file
    }
}
