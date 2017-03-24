#include "Sally.h"
#include<iostream>
using namespace std;

Sally::Sally()
{
    cout << "I am the constructor" << endl;
}

Sally::~Sally(){
    // Deconstructor cannot have any parameters or return statement.
    //Deconstructor cannot be overloaded
    cout << "I am the deconstructor!" << endl;

}
