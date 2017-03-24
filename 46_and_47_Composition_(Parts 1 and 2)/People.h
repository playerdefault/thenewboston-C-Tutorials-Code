#ifndef PEOPLE_H
#define PEOPLE_H

#include <string> // TO work with names which are strings

#include "Birthday.h" //We need to use the Birthday Header file because we need to use a Birthday object in this class

//"Composition" means using one class in another class
using namespace std;

class People
{
    public:
        People(string x, Birthday bo);
        void printInfo();
    private:
        string name;
        Birthday dateOfBirth;
        //Now every person in this class has a name and a date of birth, with date of birth being an object (instead of a regular variable - this is why we needed to include the Birthday header file)
};

#endif // PEOPLE_H
