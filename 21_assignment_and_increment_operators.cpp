#include<iostream>
using namespace std;

int main(){
	int x=20;
	
	cout << x++ << endl;
	//x++ means first the statment is executed and then 1 is added to x 
	
	cout << ++x << endl;
	//++x means first 1 is added to x and then the statement is executed
	
	cout <<	--x << endl;
	cout << x-- << endl;
	
	cout << x << endl;
	
	//In newer versions of C++ 'return 0;' is not needed to be included in main()
}	