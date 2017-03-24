#include <iostream>

using namespace std;

class Enemy{
    protected:
        int attackPower;
    public:
        void setAttackPower(int a){
            attackPower = a;
        }
};

class Ninja: public Enemy{ //Ninja class inherits from public Enemy
    public:
            void attack(){
                cout << "I am a ninja, ninja chop! -" << attackPower << endl;
            }
};

class Monster: public Enemy{
    public:
        void attack(){
            cout << "Monster must eat you!!! - "<< attackPower << endl;
            }
    };

//A Ninja is also an enemy and a Monster is also an enemy
//But, each specific enemy attacks in a specific way

int main(){
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    //Here we can set the address of Ninja n as equal to the pointer *enemy1 because all Ninjas are enemies. Anything an enemy can do, a Ninja can do.

    Enemy *enemy2 = &m;
    //For a similar reason as above.

    enemy1->setAttackPower(29);
    enemy2->setAttackPower(99);

    n.attack();
    m.attack();
    //Here Enemy object cannot attack because an Enemy class has no attack function. But the Ninja and Monster classes have attack functions so, we have to switch back to use the attack function.
}
