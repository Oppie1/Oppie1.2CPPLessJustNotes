#include <iostream>
#include <fstream>
using namespace std;


//IMPORTANT: After creating "main" source file also create a "Kanopi.txt" under the same name (source file).

int main() {

	cout << "---First example is of a file that opens correctly and therefore can be written to\n" << endl;

	//Instantiate an object named adamFile with the parameter "Kanopi.txt" of the ofstream class
	//CODE:

	//Create an if statement with the condition being whether the adamFile is open using the is_open() function. We do this by calling the
	//is_open() function on the adamFile object.
	//CODE:

	//Create a cout statement that lets user know the file has opened successfully.
	//CODE:

	//Create a else statement to run if the file did not open successfully with a cout statement stating that to user.
	//CODE:

	//Use the object (adamFile) to print a statement to the Kanopi.txt file (hint <<)
	//CODE:

	//Call the close() function on the adamFile object.
	//CODE:

	cout << "\n---Example where file does not open and there for cannot be written to---\n" << endl;

	//Create an object adamFile2 of the ofstream class and make a parameter that purposefully adds a DOESNOTEXIT/ file extension to 
	//the Kanopi2.txt file. File extension is like -> folderName/file. To work you'd have to delete DoesNotExist/ from parameter.
	//CODE:

		//Create an if statement with a condition of and adamFile2 object that is open (use the is_open() function) that adds
		//a cout statement that file opened successfully to the screen.
		//CODE:

	//Create an else statement that executes with the if statement is false that contains a cout statement the the file 
	//didnt open correctly.
	//CODE:

	//So you see this to screen and tells the programmer that the file isnt created/opened so there is nothing to write to.
	//CODE:
		cout << "\n\nThe file did not get wrote to because it does not exist...\n" << endl;

	//There is no file so this cannot write to one that is not there (obviously)

	//Use the adamFile object to write the sentence this is what is written when if statement were true (delete DoesNotExist/)
	//CODE:

	//Call the close() function on the adamFile2 object.
	//CODE:

}