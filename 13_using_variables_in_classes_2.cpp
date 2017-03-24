#include<iostream>
#include<string>
using namespace std;

class BuckyClass{
	//RIGHT way to use variables in classes
	//Do not make variables in classes public
	public:
		void setName(string x){ 
		//"Setter Function"
		//"Function in Class" = "Method"
			name = x;
		}
		string getName(){
			return name;
		}
	private:
		string name;
};

int main(){
	BuckyClass bo;
	bo.setName("Sir Bucky Wallace");
	cout << bo.getName << endl;
	return 0;
}