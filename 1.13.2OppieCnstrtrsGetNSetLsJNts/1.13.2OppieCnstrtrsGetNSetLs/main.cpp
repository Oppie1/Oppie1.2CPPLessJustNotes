#include <iostream>
#include <string>
using namespace std;




//Declare a class that will hold the constructor, getter and setter member functions as well as a 
//member variable to hold a sentence.
//CODE:

	//Create a public access specifier.
	//CODE:


	//Create a constructor that will do two things at once when called. 1. Create an object with a string var
	//parameter and initialize that string variable to the setter var with that var as its argument.
	//CODE:


	//Setter -> The setter function assigns the value into the private member parameterSentence.
	//Declare a void set function with parameter that takes string and sets that string to a member variable.
	//CODE:

	//This executes because it was called from the constructor above. 
	//All this function does is take "x" (could be y, z, a, b ect.) (sentence from argument 
	//in main and store it in private.

	//Declare a getter string function that retrieves the member variable and returns that sentence to main().
	//CODE:

	//Create a private access specifier.
	//CODE:

	//Create a string member variable to hold the welcome sentence from the constructor call in main.
	//CODE:

	//Local private variable that can ONLY be accessed within the class it belongs to

int main()
{

	cout << "\n-----  getters and setters along with constructors------\n\n";

	//Create an object/constructor of/from the class you created that holds a welcome sentence/string.
	//CODE:

	//Now call on that object using the getter function that and show the sentence out to the screen.
	//CODE:

	cout << "\n\n-------And the second constructor-------\n" << endl;

	//Now repeat using a second object and constructor with a different sentence.
	//CODE:
}

//Key Point: Constructor accepts input -> setter stores it in private data -> getter returns to main().
