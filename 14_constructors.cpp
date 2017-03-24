#include<iostream>
#include<string>
using namespace std;

class BuckyClass{
	public:
		BuckyClass(string z){
			cout << "this will get printed automagically";
			setName(z);
		}
		// A "Constructor" is executed automatically as soon as an object is created
		// By creating a public Function in the class with the same name as the class, we are creating a constructor
		// Constructors do not have a return type - you only need to type the constructor name
		// Constructors are mainly used to give variables an initial value 
		
		void setName(string x){
			name = x;
		}
		string getName(){
			return name;
		}
	private:
		string name;
};

int main(){
	BuckyClass bo("Lucky Bucky Roberts");
	//"Lucky Bucky Roberts" was passed to z which was passed to x which was passed to name
	// This 'name' has gotten an initial value
	
	cout << bo.getName();
	
	BuckyClass bo2("Sally mcSalad");
	cout << bo2.getName();
	//bo and bo2 are different objects, so no strings overlap each other
	
	return 0;
}