#include <iostream>
#include <fstream>
using namespace std;



//Declare an integer function prototype "getWhatTheyWant()" with no parameters that will return their choice.
//Code:

//Declare a void function prototype named displayItems with an integer variable as a parameter to the screen and return nothing.
//CODE:


int main() {

	cout << "Game Items Selection and Their Current Power Value" << endl;
	cout << "Enter your selection 1-3. Enter 4 to quit program\n" << endl;


	//Declare a local integer variable named whatTheyWant that will store their selection.
	//CODE:

	//Assign the whatTheyWant variable to the function call getWhatTheyWant() with no arguments.
	//CODE:

	//Create a while loop  with the condition whatTheyWant variable DOES NOT equal 4.
	//CODE:

	//Create a nested switch statement with the condition whatTheyWant as parameter.
	//CODE:

	//Create a case 1: and display items when the user selects 1. And then a break statement to prevent fall through.
	//CODE:

	//Create another case with with the displayItems() function that runs when the user selects 2 and a break to prevent fall through.
	//CODE:

	//Create a third case that uses the displayItems() function when the user selects 3 and use break to prevent fall through
	//CODE:

	//Assign the same whatTheyWant variable to the getWhatTheyWant() function call with no arguments. This is within
	//the while loop and so will keep running until the user selects 4 (sentinel control).
	//CODE:

	//Define the getWhatTheyWant() function. It will have an integer variable of choice. A list that displays what shows to the user
	//choices 1,2 and 3 as well as what they are (plain items, helpful items, harmful items. Then a cin statement for the users choice.
	//The a return of choice which will return whatever choice that is to the function call getWhatTheyWant();

}

	cout << "1 - Neutral Items" << endl;
	cout << "2 - Helpful Items" << endl;
	cout << "3 - Harmful Items" << endl;

//This is a storage variable that exists locally in this function (getWhatTheyWant(){definition}
//getWhatTheyWant(){} carries no parameters -> getWhatTheyWant(no parameter)
//CODE:

//This displays to user the three choices

//Add 3 cout statements that display number and corresponding item types to screen (plain, helpful, harmful) to the screen.
//CODE:

//This takes the user choice and stores it in the local variable.
//CODE:

//Create a return that returns the users choice to main.
//CODE:

//This is the function that carries the heavy lifting outside of main. It takes a integer parameter.
//The "x" is just a placeholder for the displayItems call argument in main() within the switch statement.
//-> displayItems(1), displayItems(2), displayItems(3). It then takes that value and runs a few functions 
// that work together. First an if statement with a nested while loop and another if condition. Technically
// the second if statement is nested within the while loop through displayItems() function/call. 

//Define the void displayItems() function with an integer variable as the parameter.
//CODE:

	//Instantiate an object named objectFile of the ifstream class with "items.txt" as its argument
	//CODE:

	//Declare an uninitialized string variable named name that will store item names read from the file.
	//CODE:


	//Declare an uninitialized double variable named power that will store item power read from file.
	//CODE:

	//Create an if statement with the condition that the user selected 1 x==1. Then a nested while loop that will read in the
	//name and power for the objectFile. Then within the while loop with a nested if condition if the power from the 
	//file is equal to 0. Then add an if statement to print the information from the file to the screen in proper formatting 
	//to match the blank spaces in txt file
	//CODE:

	//So here the "objectFile" is the object that is set equal to Items.txt and so through that object we can 
	//access the name and power that is located in the file.

	//Create a while loop nested in if condition that takes information from the txt file name/power and stores it in 
	//the object named objectFile.
	//CODE:

	//Create an if statement that if the power is equal to 0 in the text file then those items will print to screen.
	//CODE:

	//Add a cout statement properly formatted with space in between to display name and power to the screen.
	//CODE:

	//Create an if condition as if the user were to select 2. Then a nested while loop to extract data name and power from the object objectFile.
	//Then a nested if statement within the while loop that will take that data and test for items that have more that 0 power. Then
	//add cout statement to display properly formatted information to the screen.

	//Create an if condition if the user (x) selects 2.
	//CODE:

	//Create a nested while loop with the condition of retrieving name and power information from the objectFile.
	//CODE:

	//The compiler sees that the user selected 0 so it moves to the cout statement.

	//Create a nested if statement to test if of those options which items (names) power are greater than 0.
	//CODE:

	//From the file it prints the name of the object and its power value to the screen. This
	//would be a positive item with 1 or greater power. You need to structure the cout statement
	//as you want the data to be displayed to screen. Here we display one line of code with
	//a name, a space and power to screen

	//Add a cout statement with proper formation to print information to the screen.
	//CODE:


	//Create a cout statement with the condition the the user selected 3. Then a nested while loop with the condition of power and name
	//data from the objectFile (Items.txt) and bringing it into program. Then with a if condition within the while loop tes if items
	//power of the users selection is less than 0. Then print properly formatted information to the screen.
	//CODE:

	//Create a while loop the brings power and name data from the objectFile into local variables name and power for storage.
	//CODE:

	//The compiler sees that the user selected 0 so it moves to the cout statement

	//Create an if condition that will test of those items brought in how many are less than 0.
	//CODE:

	//Add cout statement that prints properly formatted data to the screen from the name and power storage variables.
	//CODE:

}