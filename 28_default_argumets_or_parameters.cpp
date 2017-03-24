#include<iostream>
using namespace std;

int volume(int l=1, int w=1, int h=1);
//If no value is entered for l, w, and h while calling the function, then the default values of 1,1, and 1 are used for the 3 variables

int main(){
	cout << volume(4,5,5);
	cout << volume(5); 
	//5 is assumed only for l, for others the default values are assumed
	
	cout << volume(5,6);
	//5 and 6 are assumed for l and w respectively. Default for others.
}

int volume(int l,int w, int h){
	return l*w*h;
}