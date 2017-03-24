#include <iostream>
#include "sally.h"
using namespace std;

int main()
{
    sally sallyObject;
    sallyObject.printCrap(); //1 way to access stuff in sally class
    //Obviously, when we use an object, we use a dot separator

    sally *sallyPointer = &sallyObject;
    //Basically 'sallyPointer' is pointing to the sallyObject
    sallyPointer->printCrap(); //2nd way to access stuff in sally class
    //Whenever we are using a pointer to an object of a class, we have to use the "Arrow Member Selection Operator" i.e. '->' to access functions of that class, like in the above case

}
