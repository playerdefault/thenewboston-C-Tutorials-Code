#include<iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main(){
	int bucky[3]={20,54,675};
	int jessica[6] = {54,24,7,8,99};
	
	printArray(bucky, 3);
	// When passing an array to a function, you ONLY need the name of the array, i.e. no 'bucky[3]' or 'bucky[]'
	
	printArray(jessica,6);
}

void printArray(int theArray[], int sizeOfArray){
	for(int x =0; x<sizeOArray; x++){
		cout << theArray[x] << endl;
	}
}