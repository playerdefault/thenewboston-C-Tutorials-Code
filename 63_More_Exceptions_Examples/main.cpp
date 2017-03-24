#include <iostream>

using namespace std;

int main()
{
    try{
        int num1;
        cout << "Enter the first number: " << endl;
        cin >> num1;
        //The arrowheads show the flow of information

        int num2;
        cout << "Enter the second number: " << endl;
        cin >> num2;

        if (num2 == 0){
                throw 0; //Outputs to the catch keyword
        }

        cout << num1/num2 << endl;
    }catch(...){ //The default catch message - it essentially catches any kind of error thrown to it - also, it is the most commonly used catch keyword
        cout << "You can't divide by 0" << endl;

    }
}
