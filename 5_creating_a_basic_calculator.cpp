#include<iostream>

using namespace std;

int main(){
	int a; //declaring the variable
	int b;
	int sum;
	
	cout << "Enter a number \n";
	cin >> a;
	//'cin' is called the "Input Stream Object"
	// >> is called the "Stream Extraction Operator"
	// >> gives information to the computer as opposed to <<
	
	cout << "Enter another number \n";
	cin >> b;
	
	sum = a + b;
	cout << "The sum of those numbers is " << sum << endl;
	return 0;
}