#include<iostream>
using namespace std;

int main(){
	int fish = 5;
	cout << &fish << endl;
	// '&fish' is the address of the variable 'fish' in the memory
	
	int *fishPointer; //*fishPointer tells the compiler that we are going to make a pointer and not a regular variable
	fishPointer = &fish;
	//fishPointer Pointer is equal to the memory address of the variable fish
	
	cout << fishPointer << endl;
}