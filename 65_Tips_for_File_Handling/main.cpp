#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream buckysFile("beefjerky.txt");

    if(buckysFile.is_open()){ //Checks if the object buckysFile is associated with a file or not i.e. if a file is open
    //In actual programming, make sure that the file is open when doing something - i.e. most of the code should be here.
        cout << "OK the file is open" << endl;
        }
    else{
        cout << "Bucky You messed up" << endl;
    }

    buckysFile << "I love Beef Jerky!" ;
    buckysFile.close();

}
