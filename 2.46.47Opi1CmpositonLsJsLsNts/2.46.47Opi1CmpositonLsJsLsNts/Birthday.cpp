#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;



//Define the birthday() of the birthdayClass here. Once regular then try with member initializer list.
//CODE:
Birthday::Birthday(int m, int d, int y) {

	m_month = m;
	m_day = d;
	m_year = y;

}

//Call a function of the birthday class called printDate that when executed formats print date sentence.
//CODE:
void Birthday::printDate() {

	cout << m_day << "/" << m_month << "/"<< m_year << endl;

};