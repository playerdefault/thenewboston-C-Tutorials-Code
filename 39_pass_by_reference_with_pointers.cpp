#include<iostream>
using namespace std;

int main(){
	int betty = 13;
	int sandy = 13;
	
	passByValue(betty);
	passByReference(&sandy); //Note that '&sandy' is done for passing by reference.

	cout << "Betty: " << betty << endl;
	cout << "Sandy: " << sandy << endl;
	}

void passByValue(int x){
	//Here while passing the variable from main() to this function, copies of the data of the variables are made and the original variable cannot be touched from this function 
	
	x = 99;
	//The original variable is unmodified
}

void passByReference(int *x){ //*x will hold the Memory Address of the passed variable
//This way, by passing a variable by reference in a function, we have direct control of the variable inside the function 
	
	*x =66;
	//We have modified the original variable 
}