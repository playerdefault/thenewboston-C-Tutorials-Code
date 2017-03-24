#include<iostream>
using namespace std;

int main(){
	
	char c;
	cout << sizeof(c) << endl;
	//sizeof tells the memory size of the variable
	
	double bucky[10];
	cout << sizeof(bucky)/sizeof(bucky[0]) << endl;
	// Above logic is used to find the number of elements in an unknown array - memory used by the whole array / memory used by single element of the array
}