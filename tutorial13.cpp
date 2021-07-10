#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 2; 
	int &b = a;
	
	cout << a << endl; 
	cout << b << endl; 
	cout << &a << endl; 
	cout << &b << endl; 
}

/*
Putting a "&" in front of a variable tells you the 
location of where the variable is in your computer (in Hexadecimal)
*/