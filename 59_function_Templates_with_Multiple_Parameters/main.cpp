#include <iostream>

using namespace std;

template<class FIRST, class SECOND>
//Above line says that we will be working with 2 data types, but we have no idea what those data types are
//Programming Convention - Template Classes are all CAPS

FIRST smaller(FIRST a, SECOND b){
    return (a<b?a:b); //This line says that if a is smaller than a, then return a, else return b
}
//Here because return type is FIRST (int for this program), the double answer will be converted to an int

int main()
{
    int x = 89;
    double y = 56.78;
    cout << smaller(x,y) << endl;
}
