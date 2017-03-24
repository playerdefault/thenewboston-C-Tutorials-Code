#include<iostream>
using namespace std;

template <class bucky> //This is called a "Template Definition". Here 'bucky' is a generic type of data.

bucky addCrap(bucky a, bucky b){//After adding 'bucky', this function can now multiple types of data like ints, floats etc.
    return a+b;
}

int main(){
    int x = 7, y =43, z;
    z = addCrap(x,y);
    cout << z << endl;

    double x1 = 7, y1=43, z1;
    z1 = addCrap(x1,y1);
    cout << z1 << endl;

    //The one thing that cannot be done is taking x and y as different types of data
}
