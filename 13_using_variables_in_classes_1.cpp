#include<iostream>
#include<string>
using namespace std;

class BuckyClass{
	//WRONG way to use variables
	public:
		string name;
		//defined variable 'name' in BuckyClass
		//Making Class Variables public is NOT GOOD PROGRAMMING PRACTICE
		//Make Class Variables private
		//Build a public function inside the class to access the variables
};

int main(){
	BuckyClass bo;
	bo.name = "Bucky Roberts";
	cout << bo.name;
	return 0;