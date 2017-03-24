#include<iostream>
using namespace std;

class Enemy //A class containing a Pure Virtual Function is known as an "Abstract Class"
{
public:
    virtual void attack() = 0;
    //This is how to make a "Pure Virtual Function". If Monster class does not have attack function and we call the attack function, then the compiler will show an error.
    //A pure virtual function does not give the option of inheriting from the Base Class. A pure virtual function has no body - just the one line.
};

class Ninja: public Enemy{
public:
    void attack(){
    cout << "Ninja Attack!" << endl;
    }
};

class Monster: public Enemy{
public:
        void attack(){
           cout << "Monster Attack" << endl;
        }
        //Whenever a Derived Class inherits a Class with a pure Virtual Function, it must (no exceptions) overwrite the pure virtual function (i.e. it should have a function with that name to overwrite the pure virtual function during execution).
        //This is often used to ensure that the Monster class has a specific way of attacking (i.e a specific attack function)
};

int main(){
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();

    //In the normal case (i.e. without a 'pure' Virtual Function) because the Monster class has no attack function, the default Enemy Class's attack function is used

//virtual void attack(){
//        cout << "Enemy Attack!" << endl;
//    }
}
