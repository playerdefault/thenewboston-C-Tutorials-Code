#include<iostream>
using namespace std;

int tuna = 20;
//Whenever you make your variable outside your function, every function can access this variable
//It's a "Global Variable"
int main(){
	int tuna = 69; 
	int tuna2 = 79;
	//Only main has access to tuna2.
	
	cout << tuna << endl;
	//In the above statement, it will use value of the "Local Variable"
	
	cout << ::tuna << endl;
	//:: is called the "Unary Scope Resolution Operator". So, basically in the above statement, it will use the gobal value of variable 'tuna'
	
	cout << tuna2 << endl;
	
	bucky();
}

void bucky(){
	cout << tuna << endl;
}