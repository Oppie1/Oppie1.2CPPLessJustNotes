#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;



int main() {

	//We create dateOfBirthObj of the Birthday class ->Birthday(class) dateOfBirthObj(object) with. This declares the VARIABLE dateOfBirthObj
	//argument(11,01,1981). These arguments fit into the parameters of prototype in header then to .cpp file.
	//Instantiate object of Birthday class named date of birth obj that takes arguments of Claudia's birthda bday format
	//CODE:
	Birthday dateOfBirthObj(11, 01, 1981);

	//Create/instantiate a claudiaVilla object of the People class with arguments Claudia (string "" hint) , dateOfBirthObj)
	//CODE:
	People claudiaVillaObj("Claudia is ", dateOfBirthObj);

	//Call the the printInfo function on the claudiaVilla object you just created.
	//CODE:
	claudiaVillaObj.printInfo();

}