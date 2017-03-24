#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int age=23;
	int money=650;
	
	if(age>21){
		if(money>500){
			cout << "You are allowed in";
		}
	}
	
	//using logical operators, the code can be made simpler
	if(age>21 && money>500){
		cout << "You are allowed in";
		}
	
	//OR Logical Operator
	if(age>21 || money>500){
		cout << "You are allowed in " << endl;
	}
}