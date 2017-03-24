#include<iostream>
using namespace std;

int main(){
	int bucky[5];
	int *bp0=&bucky[0];
	int *bp1=&bucky[1];
	int *bp2=&bucky[2];
	
	cout << "bp0 is at memory address " << bp0 << endl;
	cout << "bp1 is at memory address " << bp1 << endl;
	cout << "bp2 is at memory address " << bp2 << endl;
	
	bp0 += 2;
	cout << "bp0 is now at memory address " << bp0 << endl;
	//Pointers don't work like simple math. When we added 2 to bp0, it changed the memory address pointed by it - i.e. it moved 2 memories next to bp0
	