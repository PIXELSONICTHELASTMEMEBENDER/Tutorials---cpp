#include <iostream>
#include <string>
using namespace std;

int main() {
	bool x = !(2 < 4); // In reality FALSE
	bool y = true && false; // This AND that
	bool w = false || true; // This OR that
	cout << y << endl;
	cout << w << endl;

	bool test = !(false && true);
	bool test2 = !(!false || !true);
	bool test3 = (!!false && !!true);

	// Distributing the NOT'S to make the solving easier || BOOLEAN MATH SIMPLIFICATION
	bool test4 = ((!false || !!true) || !!true) && true;
	bool test411 = ((!false && !!true) && !!true) && true; // Simplification 1
	bool test41 = ((true && true) && !!true) && true; // Simplification 2
	bool test42 = (true && true) && true; // Simplification 3
	bool test43 = true && true; // Simplification 4
	bool test44 = true; // Simplification 5

	// Practice
	bool hw1 = ((!true && !!false) || !!true) && true;
	bool hw2 = ((false) && true) && true;
	bool hw3 = false && true;
	bool hw4 = false;
}

// Logical Operators
/*
! 
&&
||
*/