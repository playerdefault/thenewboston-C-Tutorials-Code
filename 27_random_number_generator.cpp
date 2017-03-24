#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	srand(43); //Outputs random number BASED ON the number input 
	
	srand(time(0)); //Outputs random number using current time - truly random
	
	for(int x=1;x< 25;x++){
		cout << 1+(rand()%6) << endl;
		//Gives random numbers between 1 to 6 only
		//But not truly random
	}
}