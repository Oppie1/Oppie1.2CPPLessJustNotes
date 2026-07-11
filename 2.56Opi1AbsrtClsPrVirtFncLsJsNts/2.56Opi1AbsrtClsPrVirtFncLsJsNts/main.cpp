#include <iostream>
using namespace std;



//Declare a class named Enemy
//CODE:

//Declare a public access specifier
//CODE:

//Declare a pure virtual void attack() function (= 0 means no implementation in base class)
//CODE:

//Declare derived class Ninja with the base class Enemy
//CODE:

//Declare a public access specifier
//CODE:

//Declare a a void attack function to override the virtual on in the b ase Enemy class outputting Ninja attack.
//CODE:

//Declare a derived class Monster with the base class Enemy
//CODE:

//Declare a public access specifier
//CODE:

//Declare a a void attack function to override the virtual on in the b ase Enemy class outputting Monster attack.
//CODE:

//Declare derived class Orc with a base class Enemy.
//CODE:

//Declare public access specifier.
//CODE:

//***Try uncommenting this line out and see what happens (the program will work!).
// 
//void attack() {
//	cout << "I am orc attack! If I were commented out the program will NOT run (gets error)." << endl;
//}



int main() {

	
//Instantiate an object named n of the Ninja class.
//CODE:

//Instantiate an object named m of the Monster class
//CODE:
	
//Instantiate object o of the Orc class
//CODE:

//Declare a pointer enemy1 of class Enemy that holds the memory address of n
//CODE:


//Declare an enemy2 pointer of Enemy class that holds the memory address of m
//CODE:

//Declare an enemy3 pointer of class Enemy that holds the memory address of o.
//CODE:

//Call the attack function using the enemy1 (n) pointer and the arrow member selection operator 
//CODE:

//Call the attack() function using the enemy2 (m) pointer and arrow operator
//CODE:

//Call attack() through the enemy3 pointer. Here will cause an error since orc has no implementation (commented out)
//CODE:

}