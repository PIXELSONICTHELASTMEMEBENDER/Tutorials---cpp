#include <iostream>
#include <string>
using namespace std; 

int main() {
	string r;
	cin >> r;
	cout << r << endl;
}

int calculatorCode() {
	int num1, num2;
 	cout << "Enter a Number: ";
 	cin >> num1;
 	cin.clear();
 	cin.ignore(1000, '\n');
 	cout << "Enter a 2nd Number: ";
 	cin >> num2;
 	int sum = num1 + num2;
 	cout << "The sum is: " << sum << endl;

 	return 0;
}


// Declaring constant variable 
/*
const int x = 8
const int gravity = -9.8; 

*/

// cout << cin.fail(); // To check if there was failure in the input