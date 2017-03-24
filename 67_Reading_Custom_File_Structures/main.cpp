#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream theFile("players.txt"); //'ifstream' is used for reading the data from a file. 'ofstream' is used for outputting the data to a file

    int id;
    string name;
    double money;

    while(theFile >> id >> name >> money){ //The information comes from the theFile object. The first piece of information is stored in id, the second in name and the last in money - the same order as was entered in the previous program
     //The "File Pointer" always keeps track of where in the file we are. That is how the information is passed to id, name and money

     cout << id << ", " << name << ", " << money << endl;
    }
    //When the End-Of-File is reached, the file pointer return a null pointer and the entire expression inside while becomes false - causing the loop to quit. C++ automatically knows when to end.

    //Whenever the above sitaution is reached, the deconstructor of ifstream is called automatically and the File Object is automatically closed. So we do not have to close the File Object explicitly.
}
