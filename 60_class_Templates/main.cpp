#include<iostream>
using namespace std;

template< class T>
class Bucky{
    T first, second;
    public:
        Bucky(T a, T b){ //Constructor
            first = a;
            second = b;
        }
        T bigger();
};

template <class T> //If function definition (here bigger()) is done outside the class, then the function template is to be written again

T Bucky<T>::bigger(){ //The extra <T> is required to tell that it is the same data type as the class
    return(first>second?first:second);
}

int main(){
    Bucky <int> bo(69, 105); //When we are using Class Templates, we have to tell what type of data we are going to enter - here int
    cout << bo.bigger();
}
