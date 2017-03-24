#include<iostream>

using namespace std;

void printSomething(); 
//This is called "Function Prototyping" - basically a copy your function's header
int main(){
	printSomething();
	return 0;
}

void printSomething(){
	//'void' is the function return type 
	cout << "oooo i am text on the screen" << endl;
}