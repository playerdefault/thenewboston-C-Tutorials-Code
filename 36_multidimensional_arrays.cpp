#include<iostream>
using namespace std;

int main(){
	
	// A Multidimensional Array is basically made up of rows and columns - arrays within arrays, technically
	
	int sally[2][3] = {{2,3,4} , {8,9,10}}; // An array made of 2 smaller arrays
	
	//2,3,4
	//8,9,10
	
	cout << sally[0][2]; // Prints the element with value '4'
}