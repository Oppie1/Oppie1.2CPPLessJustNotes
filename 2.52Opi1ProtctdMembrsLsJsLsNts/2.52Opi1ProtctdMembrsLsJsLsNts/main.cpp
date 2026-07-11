#include <iostream>
#include "Father.h"
#include "Son.h"
using namespace std;


int main() {

	cout << "This is the Son object access: " << "\n" << endl;

	//Instantiate an object named nakai of the Son class
	//CODE:

	//Call the protectedDemo function on the nakai object you just made.
	//CODE:
	//cout<<nakai.publicVF; -> This can work from main.
	//cout << nakai.protectedVF; ->Thi cannot. Only through the Son class/.cpp file and then through  protectedDemo().

	cout << "\nAnd this demonstrates the Fathers object access: " << "\n" << endl;

	//Instantiate and object name stepAdam of the Father class.
	//CODE:

	//Call the fatherObjAllAccess function on the stepAdam object you just created.
	//CODE:

}