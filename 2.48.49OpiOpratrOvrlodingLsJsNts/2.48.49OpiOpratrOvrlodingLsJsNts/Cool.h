#pragma once



//Declare a class named Claudia
//CODE:
class Claudia {

public:

	int num;

	//Declare a public access specifier.
	//CODE:

	//This is an int variable that will be used to store a number.

	//Declare a integer member variable num of the Claudia class.
	//CODE:

	//Declare a blank constructor named Claudia
	//CODE:
	Claudia();

	Claudia(int);

	//Declare a Claudia function with an integer parameter.
	//CODE:

//Declare a function that overloads the ^ operator, returns a Claudia object, and takes a Claudia object as a parameter.
//CODE:
	Claudia operator^(Claudia b);

};
