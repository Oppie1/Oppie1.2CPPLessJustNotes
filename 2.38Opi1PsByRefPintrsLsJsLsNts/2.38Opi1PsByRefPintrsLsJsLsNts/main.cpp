#include <iostream>
using namespace std;





//Declare void function passByValue with an integer variable parameter.
//CODE:

//Declare void function passByReference with an int pointer variable as its parameter.
//CODE:

int main() {

	//Declare two variables betty and sandy and initialize each to 13 and 17 respectively
	//CODE:

	//Create a cout statement that shows the value of each variable.
	//CODE:

	cout << "\nNow main calls to the outside (of main() program) functions and each executes (below)\n";
	
	//Call passByValue function with parameter betty.
	//CODE:

	//Call passByReference with the parameter of the memory address of sandy.
	//CODE:

	//Here we demonstrate the impact of each logic on the values within main itself.
	cout << "\nThis is in main and shows the impact of functions on betty and sandy variables" << endl;

	//Create a cout statement that betty has only changed in the function. NOT in main: 
	//CODE:

	//Write a cout statement that sandy has changed and then display the sandy variable
	//CODE:

}


//Define the function void pass by value and set x = 99.
//CODE:

//Declare int variable x and initialize it to 99.
	//CODE:

	cout << "\nThis is the passByValue function outside of main. When main 'calls'\n";
	cout << "this runs/execute and show to screen I changed betty (x here) value only here to: \n";
	//Make a cout statement that displays the x value to the screen.
	//CODE:


//Define the passByReference function with int pointer variable as its parameter.
//CODE:

	//Declare a pointer variable and set it equal to 66
	//CODE:

	cout << "\nThis is the passByReference function and when call executes which changes the value of\n";
	cout << "sandy (x here) to 66. The key difference is when control is returned to main sandy value\n";
	cout << "stays changed and will be 66 at that point. The value in the function is:\n";

	//Add a cout statement that display the pointer variable to the screen.
	//CODE:

	
//functions (declare -> define -> call).