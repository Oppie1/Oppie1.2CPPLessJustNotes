#include <iostream>
using namespace std;



int main() {


	//Declare integer array named tuna with 5 elements and initialize it to (5,10,15,20,25).
	//CODE:
	int tuna[5] = { 5,10, 15,20,25 };

	//Declare an integer value named sum and initialize it to 0.
	//CODE:
	int sum = 0;

	cout << "Below is the total of an array with 5 elements added together as it iterates through indices.\n" << endl;

	for (int x = 0; x < 5; x++) {


		sum += tuna[x];

		cout << x << "   The running total of sum is: " << sum << endl;
	}

	//Use for loop that declares integer value x and initializes it to 0. Then set control to x is 
	//less than 5 then iterate x by 1.
	//CODE:

	//Assign sum to an expression that adds the elements of the array together during each iteration.
	//CODE:

	//Output statement that shows which iteration x program is on and the running total of sum to the screen:
	//CODE:

	//Output statement to let the user know the for loop has fully executed and that control returns to main().
	//CODE:
	cout << "\nCongrats for loop has executed fully and now your back in main for next step." << endl;

}