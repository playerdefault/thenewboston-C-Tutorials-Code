#include <iostream>
#include <fstream>
using namespace std;

int getWhatTheyWant(); //Function Prototype
void displayItems(int x); //Function Prototype

//main Function
int main()
{
    int whatTheyWant;

    whatTheyWant = getWhatTheyWant();

    while(whatTheyWant != 4){
        switch(whatTheyWant){
            case 1:
                displayItems(1);
                break;
            case 2:
                displayItems(2);
                break;
            case 3:
                displayItems(3);
                break;
        }
        whatTheyWant = getWhatTheyWant();
    }
}

//getWhatTheyWant function
int getWhatTheyWant(){
    int choice;

    cout << "\n1 - Just Plain Items" << endl;
    cout << "2 - Helpful Items" << endl;
    cout << "3 - Harmful Items" << endl;
    cout << "4 - Quit Program\n" << endl;

    cin >> choice;
    return choice;
}

//displayItems function
void displayItems(int x){

    ifstream objectFile("objects.txt");
    string name;
    double power;

    if(x==1){
        while(objectFile >> name >> power){
            if(power == 0){
                cout << name << ' ' << power << endl;
            }
        }
    }

    if(x==2){
        while(objectFile >> name >> power){
            if(power > 0){
                cout << name << ' ' << power << endl;
            }
        }
    }

    if(x==3){
        while(objectFile >> name >> power){
            if(power < 0){
                cout << name << ' ' << power << endl;
            }
        }
    }
}
