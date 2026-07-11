#include <iostream>
#include "Father.h"
#include "Son.h"
using namespace std;



//Define void protectedDemo function of Son class with no parameters 
//CODE:

	//Declare and initialize a couple variables pubV protectV
	//CODE:

	//Output publicVF and protectedVF from Father class members to the screen. Demonstarting
	//you have access to these but only protected through the son class. Not from main. And
	//you DO NOT have access to privateVF even from function made in Spn.

//Assign a value of 1 to variable publicV
//CODE:

	//Assign a value of 2 to variable protectedV
	//CODE:

	//*If private were not commented out (below) this program would fail* 
	//privateV = 3;

	//Output two statement stating the public and then private variables are publicV and Protected V
	//CODE:

	//This would not work as it tries to access private information from Father Class.
	//cout << "The public variable is: " << privateV << "\n;" << endl;