#include <iostream>
#include "cool.h"
using namespace std;



//Define default Claudia constructor of Claudia class. Initialize the member variable num to 0 
//using member initializer list.
//CODE:
Claudia::Claudia() :num(0) {


}


//Define a Claudia function with integer parameter. Then assign that int parameter value to num in the body of definition.
//CODE:
Claudia::Claudia(int a) {

	num = a;
}


//Define the operator^ function for the Claudia class. The first Claudia is the return type - this function returns a Claudia
//OBJECT and takes another Claudia object(b) as its parameter. 
//CODE:
Claudia Claudia::operator^(Claudia b) {

	Claudia	newObject;
	newObject.num  = num + b.num;
	return newObject;

}

//Make/instantiate/create a newObject of the Claudia class.
//CODE:
 
//CODE:

//Return with new object as parameter.
//CODE:


//Define the operator^ function for the Claudia class that returns a Claudia object and accepts a Claudia object (b) as its parameter
//CODE:

//This clarifies that:
//The first Claudia = return type
//The second Claudia:: = which class owns this function (look in).
//operator^ the overloaded operator
//(Claudia b) = the parameter

