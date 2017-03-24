#include<iostream>
using namespace std;

// Recursion is the idea that a function can call itself

int factorialFinder(int x){
	if(x==1){ // This is the "Base Case" i.e. the point of end of the Recursive Function, otherwise it will keep running forever till the program crashes
		return 1;
	}
	else{
		return x*factorialFinder(x-1);
	}
}

int main(){
	cout << factorialFinder(5) << endl;
}