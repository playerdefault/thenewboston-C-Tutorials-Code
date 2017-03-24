#include<iostream>
using namespace std;

//"Function Overloading" is the idea that in C++ we can create 2 different functions with the same name but different arguments, return types, or parameters

void printNumber(int x){
	cout << "I am printing an integer which is " << x << endl;
}

void printNumber(float x){
	cout << "Now I am printing a float which is " << x << endl;
}

int main(){
	int a = 54;
	float b = 32.4896;
	
	printNumber(a);
	printNumber(b);
}
	