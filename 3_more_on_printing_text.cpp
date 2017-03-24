#include<iostream>

using namespace std;

int main(){
	cout << "boy i love bacon" ; 
	cout << "and ham"; 
	//'cout' will print everything in one line because it prints only in one stream - we are not telling it to move to a new line
	
	cout << "boy i love bacon" << endl; 
	cout << "and ham";
	//endl is codeword for end line
	
	cout << "boy i love bacon \n";
	cout << "and ham";
	// \n is the symbol to move to a new line as well
	// \n is the newline operator
	
	cout << "boy i love bacon \n \n";
	cout << "and ham";
	
	cout << "boy \n i \n love \n bacon";
	return 0;
}