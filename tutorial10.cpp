#include <iostream>
#include <string>
using namespace std;

int main() {
	// Simple While/For loop
	
	int x = 10;
	while (x < 10) {
		int add;
		cout << "Type a number to add to x: ";
		cin >> add;
		x += add;
		cout << "x is: " << x << endl;
	}

	do { // Does the action, then checking if it needs to do that action again
		int add;
		cout << "Type a number to add to x: ";
		cin >> add;
		x += add;
		cout << "x is: " << x << endl;

	} while (x < 10);

	// for (int i = 0; i < 10; ++i)
	// {
	// 	if (i == 9 || i == 7) 
	// 	{
	// 		continue;
	// 	}
	// 	cout << i << endl;   
	// }


}