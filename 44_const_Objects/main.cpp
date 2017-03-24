#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{
    const int x = 3;
    //const keyword tells the compiler to not change the value of the variable/object throughout the program
    //Whenever we have a constant object, we can't call regular functions with them, we can only call const functions: constant Objects need constant functions

    cout << x << endl;

    Sally salObj;
    salObj.printShiz();
    // No problems here

    const Sally constObj; // Created a constant Object

   /** \brief
    *
    * \return //
    *
    */
    constObj.printShiz(); //Shows an error message

    constObj.printShiz2();
}
