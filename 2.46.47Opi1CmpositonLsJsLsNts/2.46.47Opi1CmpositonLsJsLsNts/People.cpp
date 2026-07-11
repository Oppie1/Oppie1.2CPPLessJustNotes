#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;


//Define the People constructor of the People class with parameters name and Birthday (with Birthday object from main)
//CODE:
People::People(string name, Birthday dateOfBirthObj) :

	//Initialize the name and dateOfBirthObj variable member initializer style.
	//CODE:

	m_name(name),
	m_dateOfBirthObj(dateOfBirthObj)

{


}

//Define a void printInfo() of the People class that outputs a sentence saying person name,
//was born on and then the print date function from the Birthday class.
//CODE:
void People::printInfo() {

	cout << m_name << " was born on ";
	m_dateOfBirthObj.printDate();
}

	//Make a cout statement the displays the name MEMBER(hint) variable and " was born on"  to screen.
	//CODE:


		//This goes out to the birthday class and says "hey, run this function please!"

	//Call the print date function on the MEMBER(hint) dateOfBirthObj
	//CODE: