#include<iostream>
using namespace std;

void printCrap(int x){
	//'x' is a function parameter
	cout << "Bucky's favourite number is " << x << endl;
}

int main(){
	printCrap(20);
	return 0;
}