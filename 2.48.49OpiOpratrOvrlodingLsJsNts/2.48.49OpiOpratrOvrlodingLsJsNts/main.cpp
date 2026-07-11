#include <iostream>
#include "cool.h"
using namespace std;


int main() {

	//Instantiate two objects of the Claudia class a and b with the parameters 3 and 7 respectively.
	//CODE:
	Claudia a(7);
	Claudia b(3);

	Claudia c;

	//Instantiate a third object c with no parameters.
	//CODE:

	//Assign the result of the expression to the object c.
	//Use/write an expression using the overloaded ^ operator to add the two objects a and b.
	//CODE:
	c = a ^ b;

	//Output the value of c.num to the screen (object "." number from a and b addition)
	//CODE:
	cout << c.num << endl;

}