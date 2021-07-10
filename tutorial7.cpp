#include <iostream>
#include <string>
using namespace std;

int main() {
	string exhausted = "Wow the pay roll here is quiet the experience!";
	string nperson = "nperson";
	string pperson = "pperson";
	string person = pperson;
 	int salary = 0;


	// Simple If-else statement
	if (person == nperson) {

		if (salary == 0) {

			salary += 100000;
			cout << salary << " You got your salary!" << endl << endl;
	
			}

			if (salary == 100000) {

				salary -= 50000;
				cout << salary << " Got to pay em taxes, am I right?" << endl << endl;
	
				if (salary <= 50000) { // Nested If statments

					salary -= 1000;
					cout << salary << " Whoops, now you payed an extra 1k for medical bills!" << endl << endl;
					cout << salary << " Now this is your yearly salary! Enjoy *Laughs" << endl << endl;
	
				}
					if (salary == 49000) {
						cout << exhausted << endl << endl;
					}

					cout << "Moral of the story, don't be expecting too much money from your job in the U.S. it's a waste of your hopes and dreams" << endl;


		}

	} else if (person == pperson) {

		cout << "He is the president, he doesn't need to pay his taxes!!!" << endl;

	} else {
		
		cout << "I'm not even a person";

	}




}