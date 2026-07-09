#include <iostream>
using namespace std;


//This is a demonstration of using a factorial finder to find the output of a factorial

//This is the the factorial finder function using int data type with a parameter of (int x)

//Create and integer function definition called factorialFinder with the parameter of int x.
//CODE:
int factorialFinder(int x) {

	if (x == 1) {

		return 1;
	}

	else {

		return x * factorialFinder(x - 1);
	}

	//factorialFinder(1) ------ ------ -- -- - ---------------->  1
	//2 * factorialFinder(2 -1); ->  2 * factorialFinder(1) -----> 2 * 1 = 2 factorialFinder(2) = 2 (returned in place of call in codeblock)
	//3 * factorialFinder(3 - 1); -> 3 * factorialFinder(2)-------> 3 * 2 = 6 factorialFinder(3) = 6 (returned in place of call in codeblock)
	//4 * factorialFinder(4 - 1); -> 4 * factorialFinder(3) -------> 4 * 6 = 24 factorialFinder(4) = 24 (returned in place of call in main).
}

	//This if statement is skipped so long as x DOES NOT equal 1. If it does the program finishes.

	//Create an if statement with the parameter x==1 and then have it return 1.
	//CODE:



	//Create an else statement with an expression to return x * the factorialFinder function with the parameter x - 1
	//CODE:


int main()
{
	//So remember that the call gets replaced with whatever value the function returns. So here factorialFinder(4) is 24
	//which is output to screen.

	//Create a cout statement that say "The factorial of 4 is: and then have a function call with an argument of 4 
	//CODE:
	cout << factorialFinder(4);


}