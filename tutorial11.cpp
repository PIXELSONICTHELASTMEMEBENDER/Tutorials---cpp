#include <iostream>
#include <string>
using namespace std;

int main() {
	// Simple Switch statement
	int x = 9;
	switch(x + 1) {
		case 1:
			cout << "cool" << endl;
			break;
		case 2:
			cout << "not cool" << endl;
			break;
		case 10:
			cout << "interesting" << endl;
			break;
		default: 
			cout << "default" << endl;
			break;

	}
}