#pragma once
#include <string>
#include "Birthday.h"
using namespace std;

//This is the People class and acts like a blueprint for the .cpp file. Remember, sometimes it helps
//to copy and paste this to the .cpp file that correlates with the .h file here (which is People.cpp)
//This provides a nice outline that can be filled in with the proper syntax for the corresponding info.
//Declare a People class and then a public access specifier.
//CODE:
class People {

public:

	//Declare a constructor with two parameters for name and the date of birth.
	//CODE:
	People(string name, Birthday dateOfBirthObj);

	//This is a constructor that carries two parameters and is automatically run when an object is created
	//It sees in the name and the birthday which will be initialized in the member initializer list in .cpp
	//
	//CODE:

	//Declare a void printInfo() with no parameters.
	//CODE:
	void printInfo();

	//When the .cpp file runs and the member initializer initializes the variables the data is stored
	//here in private storage. Which can only be accessed from within members of the People class.
	//We use "m_" to distinguish these variables as "members".
	//CODE:

private:

	string m_name;
	Birthday m_dateOfBirthObj;

};
