#include <iostream>

using namespace std;

int main()
{
    try{ // try - catch keywords are used for "Exception Handling". 'try' indicates in what condition should it be considered an error.
        int momsAge = 30;
        int sonsAge = 34;

        if(sonsAge > momsAge){
            throw 99;
        }
    }catch(int x){ //'catch' keyword indicates what should be done in case an error occurs
        cout << "Son cannot be older than mom, ERROR NUMBER: " << x << endl;
    }
}
