#include <iostream>
#include <string>
using namespace std;




int main() {

	//Instantiate s1 object of the string class with a string data type "I am the initialization for s1 variable/object"
	//CODE:

	cout << "I am the parameter for the s1 variable/object." << endl;
	cout << "What index number is 'am' in the word parameter in the sentence?" << endl;
	cout << "Using find() function:" << endl;

	//Add a cout statement an call the find(); function with "am" as its argument on the s1 object. From left number.
	//CODE:

	//In the instance of using the "r" find -> rfind() function it starts from the right looking for the
	//first instance of "am" from that direction. The index value of "am" from the right is 21.
	cout << "\nUsing rfind() function:" << endl;

	//Add a cout statement with and call the rfind() function on the s1 object with "am" as the parameter.
	//Second am from right number.
	//CODE:

	cout << "\nThis is an example of swapping (swap() function) one sentence with another." << endl;

	//Instantiate object named sentenceOne of string class with string as argument. Should say: "This is a variable/object
	//sentence/string that will be swapped with string/sentence two"
	//CODE:

	//Instantiate object named sentenceTwo of string class with argument "This is the variable/object that will be swapped
	//(string/sentence one)
	//CODE:

	//Add a cout statement that displays sentence one and two (objects) on different lines.
	//CODE:

	//This is the swap function (located in the string library) that we can use to perform the swap.
	//Call the swap() function on the sentenceOne object with object two as the argument.
	//CODE:

	//Add a cout statement to print sentences one and two (also objects) to the screen.
	//CODE:

	cout << "\nThis is an example of taking a sentence and pulling part of sentence out (sub string)" << endl;
	cout << "This sentence will be used to pull out substring from it.\n" << endl;


	//Instantiate an object named s2 of the string class with the argument of "This sentence will be used to pull 
	//out substring from it.
	//CODE:

	//Add a cout statement and call the substr() with arguments 14 and 12 on the s2 object


}