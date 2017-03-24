#include<iostream>
using namespace std;

class BuckyClass{
	//declaring Class
	//people make classes to bunch similar functions together
	//also used to specify which similarly named Functions to use
	public:
	//'public' is an "Access Specifier" - this means that I can use the function outside the class
		void coolSaying(){
			cout << "preachin to the choir" << endl;
		}
};

int main(){
	BuckyClass buckyObject;
	//Now I have created the Object 'buckyObject'
	//I can now use the Object to access anything public inside the class using a "Dot Separator"
	buckyObject.coolSaying();
	
	return 0;
}