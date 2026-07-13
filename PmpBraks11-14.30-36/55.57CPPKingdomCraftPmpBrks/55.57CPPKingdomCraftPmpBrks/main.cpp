#include <iostream>
using namespace std;



//Declare class named Enemy
//CODE:

//Declare a protected access specifier.
//CODE:

//Declare an uninitialized int variable to hold the attack power.
//CODE:

//Declare a public access specifier.
//CODE:

//Declare a constructor of Enemy class that sets the attack power to 1 - use a member initializer "list" syntax
//CODE:

//Declare void function to SET attack power with an int parameter and var and assign attack power to that var
//CODE:

//Use virtual keyword with a void attack() to output a message that it is the default attack
//and that displays the attack power damage to the screen.
//CODE:

//Declare a class EnemyZombie
//CODE:

//Declare a public access specifier.
//CODE:

//Declare a virtual void attack() set to 0.
//CODE:

//This is a PURE virtual function (notice the " = 0). It MUST be overwritten by any derived class 
//or we will get a compile error. This makes EnemyZombie an "abstract class" that cannot be created
//on its own - it only exists to be inherited from.

//Declare a derived class of base class Enemy named Ninja.
//CODE:

//Declare a public access specifier.
//CODE:

//Declare a void attack that will display Ninja attack as well as the damage to screen.
//CODE:

//Declare a derived class Monster of base class Enemy
//CODE:

//Declare a public access specifier to the screen.
//CODE:

//Declare a a void attack() that outputs attack message and damage to the screen.
//CODE:

//Declare a derived class Goblin of the base class Enemy.
//CODE:

	//Declare a public access specifier.
	//CODE:

	//Practice by uncommenting this when you finish program:
	//void attack() {
	//	cout << "Goblin attack! " << attackPower << " damage \n";

//	}

//Declare derived class Orc from Base class EnemyZombie
//CODE:

//Declare  public access spec
//CODE:

//Because attack() is a PURE virtual function in EnemyZ, we MUST override it here. If we don't write this function,
//the program wont compile - we'll get an error.

//Declare a void attack that just outputs Orc attack to screen to do the override.
//CODE:


int main() {

//Create 5 objects representing all the characters (including Enemy) to the screen using first letter as objects.
//CODE:

	//When we create goblin,  the Enemy constructor runs and sets attack power to 1
	
	//Use Enemy pointers as well as enemy1 2 and 3 coupled with the memory locations of each of the character objects.
	//Except Enemy but why not play with that concept. Use EnemyZombie pointer enemy 4 for the orc object as well.
	//CODE:

	//Use the arrow mem selection operator to provide arguments to the set attack power function for enemy 1 and 2
	//CODE:

	//enemy3->setAttackPower(5);//We commented this out so goblin keeps the default 0 attack power.

	//Use arrow mem selection operator with enemy3 to provide arg setAttackPower() to set DEFAULT attack to 5
	//CODE:
	//enemy3->setAttackPower(5);//We commented this out so goblin keeps the default 1 attack power

	//Use object e to set the default Enemy attack power to a number.
	//CODE:

	//Call all of the character attacks using their objects.
	//CODE:

	//Goblin should show "I am default attack 0 damage" because we didn't set a custom attack power (commented in)
	//Call the goblin attack.
	//CODE:
	
	//Use pointer var with arrow mem selection operator to call orc attack. Can use o.attack() format as well.
	//CODE:

} 