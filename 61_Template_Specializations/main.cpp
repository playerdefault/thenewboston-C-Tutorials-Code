#include <iostream>

using namespace std;

template <class T>

class Spunky{  //Generalized Template
    public:
        Spunky(T x){
            cout << x << " is not a character" << endl;
        }
};

template<> //Tells the compiler that we will be using "Template Specialization" i.e. a special behavior for a particular data type only - in this case, a character.
class Spunky<char>{ //'<char>' tells that this specialized template is only for char data type
    public:
        Spunky(char x){
            cout << x << " is indeed a character" << endl;
        }
};

int main()
{
    Spunky<int> obj1(7); //<int> is a nice hint for C++ to tell that the data type will be an integer. Should be written if you have used Specialized Template Class.

    Spunky<double> obj2(3.154);
    Spunky<char> obj3('q');

 }
