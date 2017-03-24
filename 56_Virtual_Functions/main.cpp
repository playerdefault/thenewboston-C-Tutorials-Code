#include <iostream>

using namespace std;

class Enemy{
    public:
        virtual void attack(){}
        //We know that attack function is going to be present in Ninja and Monster classes. So, when in case of defining a normal function in Enemy class, on calling the attack function, it will simply be overwritten/over-used by the respective attack functions of Ninja or Monster classes.
        //To mitigate this situation, we define the attack function as a "Virtual Function" inside the Enemy class - so that whenever it is called, it automatically uses the attack function of the Ninja or Monster class respectively.
        //Virtual Functions can be called as Template Functions.
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
            cout << "Monster Attack!" << endl;
        }
};

//Any class that inherits a class with Virtual Functions is a "Polymorphic Class"

int main(){
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m; //This is possible because Ninjas and Monsters are Enemies too.

    enemy1->attack();
    enemy2->attack();

    //Basically the last 2 lines indicate that using Polymorphism, we can have same functions with the same type of objects but they produce different results based on what address they are pointing to.
}
