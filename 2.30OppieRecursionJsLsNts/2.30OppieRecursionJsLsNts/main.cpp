#include <iostream>
using namespace std;




//Declare and define int function called factorialFinder with the parameter of int x.
//CODE:

	//Use an if statement with the parameter x==1 and then have it return 1.
	//CODE:

	//Create an else statement with expression to return x times factorialFinder() with parameter x - 1
	//CODE:


	//Each time the else condition runs the return value sits here on the stack and so first we have
	//4 * factorialFinder(4-1) -> 4*factorialFinder(3); on the top of the stack.
	//Then we have 3 * factorialFinder(2) which gets put on the stack. Finally we have to solve for 2 * factorialFinder(1).
	//factorialFinder(1) is tested in the if statement as x==1 and so true which returns one to the outer codeblock.

	//IMPORTANT: The if statement return value is to the factorialFinder function. Not to main. The if and else sit within the
	//code block of the factorialFinder function but the if statement return value is returning to the function itself NOT
	//to main.  The stacked factorialFinder functions that sit just outside the else code block execute LIFO (last in first out)
	//So x=1 solves the factorialFinder 2 then 3 then 4. And so, 
	//factorialFinder(1) = 1. 
	//factorialFinder(2) = 2 -> 2 * 1 (2 * x-1 (2-1 =1)-> 2 
	//factorialFinder(3) = 6 -> 3 * 2 (above -> factorialFinder(2) = 2. So 3*2=6 -> factorialFinder(3) = 6 
	//factorialFinder(4) = 24 -> 4 * factorialFinder(3) which is 6 (3*factorialFinder(2) which is 2.
	//So, factorialFinder(4) = 24 (4 * factorialFinder(3) which is 6 (3*2)

int main()
{

	//Output statement that says "The factorial of 4 is: and then have a function call with an argument of 4 
	//CODE:
	
}