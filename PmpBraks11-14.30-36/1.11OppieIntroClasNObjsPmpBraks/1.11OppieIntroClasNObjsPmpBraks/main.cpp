#include <iostream>
using namespace std;




//Declare a class named AdamClass
//CODE:
class AdamClass {

public:

	string name = "Adam";

	void helloFunction() {

		cout << "Welcome to computer CS my name is: ";
	}

};


//Make a public class access specifier.
	//CODE:

	//Declare a string variable called name initialized to "Adam Tindall". This will be used in conjunction with
	//above void function within main. REMEMBER we need a semi colon (;) at end of class braces };
	//CODE:

	//Declare a void function with no parameters named helloObject() that prints a welcome to AP intro to CS. My
	//name is (blank space here) message to the screen.
	//CODE:





int main() {

	//Create/instantiate object1 and object2 -> generic names. Can name whatever from the AdamClass
	//CODE:
	AdamClass object1;
	AdamClass object2;

	//Use object1 to call the function we created outside of main. Use object2 to 
	//to call the name variable and then output to screen at same time using cout
	//to produce a complete sentence.
	//CODE:
	object1.helloFunction();
	cout<<object2.name << endl;

	//Output should be one clean sentence on one line. e.g. "Hello, welcome to intro to computer science my name is Adam. 

	cout << "\n-----------Bonus----------\n" << endl;
	cout << "You can create an object that  does two things at once:" << endl;

	//Use object (here object3) that can hold two pieces of information that can be used. 
	//Write code that creates object, use SAME object to call helloObject() function and shows name to screen.
	//CODE:
	AdamClass object3;

	object3.helloFunction();
	cout << object3.name << endl;

	return 0;

}