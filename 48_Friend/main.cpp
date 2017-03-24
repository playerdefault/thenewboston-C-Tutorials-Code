#include <iostream>
using namespace std;

class StankFist{
    public:
        StankFist(){stinkyVar=0;}
    private:
        int stinkyVar;

    friend void stinkysFriend(StankFist &sfo); //Prototype using above syntax (especially the keyword 'friend') to make the function the class's friend
//When a Function is a class's friend, this means that the class can now use the Function in it's code
//&sfo is just a variable address of Stank Fish Object - its no special word or something.
};

void stinkysFriend(StankFist &sfo){
    sfo.stinkyVar=99;
    cout << sfo.stinkyVar << endl;
    //Because stinkysFriend Function is a friend of the class StankFist, it can use its variables
}

//Also note that a Class can define a Function to be it's friend (using the proper prototype syntax, as done in the Class here), but a Function cannot do so.
int main(){
    StankFist bob;
    stinkysFriend(bob);
}
