#include<iostream>
#include<string> // gives you string functions
using namespace std;


//s1,s2,s3,s4 with dot "." separater becuase these are OBJECTS!

int main() {


	//Declare a string variable named s1 and initialize it to a sentence (ex. "hello how are you")
	//CODE:
	string s1 = "hello how are you";

	//Use a for loop with i counter, length(), increment 1 and a cout statement to print that sentence to the screen.
	//CODE:
	for (int i = 0; i < s1.length(); i++) {

		cout << s1.at(i);
	}

	//Use the at() with s1 object and x as its argument on ONE LINE (hint not endl; or \n necessary).
	//CODE:

	cout << "\nPull a letter from that sentence using the at() function: " << endl;
	//Use at() to pull out the letter w from the s1 string/sentence and use cout to print to screen.
	//CODE:
	cout<<s1.at(8);

	cout << "\n---getline example---" << endl;

	//Declare an uninitialized string variable named x.
	//CODE:
	string x;

	cout << "\nPlease enter a short sentence:" << endl;

	//Use the getline(,) function to "cin" the data from "x"
	//CODE:
	getline(cin, x);

	cout << "\nThe sentence you just wrote was:\n";

	//cout sentence x to the screen.
	//CODE:
	cout << x << "\n" << endl;

	cout << "\n---------------------------------------------------------------------\n" << endl;
	cout << "\nSetting string variable to a word/sentences. Understand variable can be initialized like an \n";
	cout << "object because technically it is an object\n";

	//Declare a string variable s2 with the argument "hamster"
	//CODE:
	string s2 = "hamster";

	//Declare two more uninitialized string variables s3 and s4.
	//CODE:
	string s3;
	string s4;

	//Add a cout statement with description to show s2 out to the screen.
	//CODE:
	cout << s2 << endl;

	cout << "\n---Setting string equal to another string (s2 or s3 here) directly and using the assign() function.\n";
	//Assign s3 to s2 directly.
	//CODE:
	s3 = s2;

	//Assign s4 OBJECT using the assign() using the dot . separator.
	//CODE:
	s4.assign(s2);

	cout << "Show that output to the screen: \n";
	//Add a cout statement to display of each variable s1, s2, s3 to the screen.
	//CODE:
	cout << s1 << "\n" << s2 << "\n" << s3 <<"\n" << s4 << endl;

	cout << "\n---Example of NOT using getline() function and what happens when just cin is used---\n";

	//Declare an uninitialized string variable named adam.
	//CODE:
	string adam;

	cout << "Enter a short sentence: \n";
	//Write a cin statement using getline() to bring in and store the sentence in the string variable named Adam
	//CODE:
	getline(cin, adam);

	//Add a cout statement to display that sentence stored in adam to the screen.
	//CODE:
	cout << adam << endl;

}

//string x; 
//whenever you want to read in an entire line of data you use "getline"
// getline(cin, x)
// cout<< x<< endl; Now instead of reading in entire line
//**by using getline the end of an input is determined by a new line character (endl).
// -------------------------------------
//string s1("hamster ") //Now hamster will be equal to s1.
//string s2;//This creates a blank string
//string s3;

//Any time you want to copy a string you can set s1 equal to s2 (so s2 is hamster
//s2 = s1;//Like this
//s3.assign(s1);//using "assign" - this is a function from the string class. This "copys" so if you wanted to have
//s3 the same as s1 (string 3 and string 1) Each of these functions do the exact same identical thing
//Each of these function copy each string to the new variable s1 to s2/s3

//cout << s1 << s2 << s3 << endl; //After executing/programing/coding the above the output of this line of code will be
//hamster hamster hamster.
//So again using "assign" is an alternative to copying strings
//------------------------------------------
//string bucky;
//cin>> bucky;
//cout << "the string I entered is: " << bucky << endl;
//This will only read in one word not whole sentence

//**Whenever using cin to read data in whether its from the keyboard or a file the end of the input is determined
//by the first whitespace character it comes across. "tuna" sandwich example only would print out tuna
//cin only reads in one small piece of data at a time. So we use getline and a new line character endl or \n to
//output full sentence (tuna sandwiches are darn good example - whole sentence is seen to screen and when you
//press enter the full sentence is printed to the screen.