#include <iostream>

#include<fstream> //This is the header file needed for File input and output

using namespace std;

int main()
{
    //C++ needs to go through objects to access files, it cannot directly deal with files

    ofstream buckyFile; //Now we have a file object a.k.a. access to a file

    buckyFile.open("tuna.txt"); //'open' function is used for opening a file
    //Now because tuna.txt does not exist, it will be automatically created

    buckyFile << "I love tuna and tuna loves me! \n"; //Now, this string is output to the text file associated with buckyFile object

    buckyFile.close(); //It is always good to close the object after working with the files because it frees the computer memory - good programming practice. This sentence does so.
}
