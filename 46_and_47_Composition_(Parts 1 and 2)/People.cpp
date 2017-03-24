#include "People.h"
#include<iostream>
#include<string>
#include "Birthday.h" // Need to include it here because we will be using this header
using namespace std;

//Anytime we are working with a class inside another class, we need to use a Member Initializer List
People::People(string x, Birthday bo)
: name(x), dateOfBirth(bo)
{

}

void People::printInfo(){
    cout << name << " was born on ";
    dateOfBirth.printDate();
}
