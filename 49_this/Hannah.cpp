#include "Hannah.h"
#include<iostream>
using namespace std;

Hannah::Hannah(int num)
:h(num)
{

}

void Hannah::printCrap(){
    cout << "h= " << h << endl;
    cout << "this->h= " << this->h << endl;
    //The keyword 'this' is a special kind of pointer. It stores the address of the current object that I am working with. In the case of this program, it's ho.
    //'this' explicitly tells C++ that I am working with this object
    //In the above statement, 'this->h' means value of the variable h associated with address of this object (ho) - so in this program, it means 23.

    cout << "(*this).h= " <<(*this).h << endl;
    //'*this' is called "Dereferencing a Pointer" i.e. it takes out the hexadecimal path  memory location of the current object and calls the variable's (here h's) value right there
}

