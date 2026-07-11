#pragma once
#include <iostream>
#include "Birthday.h"
using namespace std;



//Declare a class and name it Birthday
//CODE:
class Birthday{

//Declare a public access specifier
//CODE:
public:

//Make constructor declaration/declare a constructor Birthday with three parameters int m, int d, int y (month, day, year)
//CODE:
	Birthday(int m, int d, int y);

//Declare a void function that prints the date (name it yourself -> Use your imagination ;)
//CODE:
	void printDate();

//Declare a private access specifier.
//CODE:
private:

//Declare 3 int member variables (use m_) to help track that they are member variables of the birthday class to represent month, day, year.
//CODE:
	
	int m_month;
	int m_day;
	int m_year;

};