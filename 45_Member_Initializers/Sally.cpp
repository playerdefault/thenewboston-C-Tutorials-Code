#include "Sally.h"
#include<iostream>
using namespace std;

Sally::Sally(int a, int b)
: regVar(a), constVar(b) //This is where the syntax is to go
{

}
// The ':'(colon) tells C++ compiler that we are going to be working with Member Intitialization syntax.
//Multiple variables are separated with a comma.
// What this does is that we have a constructor that takes 2 variables and sets one as a regular variable (regVar) and the other as a constant Variable (constVar))

void Sally::print(){
    cout << "Regular Var is: " << regVar << " and the constant Variable is: " << constVar << endl;
}
