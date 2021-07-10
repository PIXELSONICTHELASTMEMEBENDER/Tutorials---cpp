#include <iostream>
#include <string>
using namespace std;

int main() {

	//Different types of arrays
	
	int arr[] = {1 ,6, 8, 9};
	
	float arr2[] = {1.1 , 2.3, 8.3};
	
	bool arr3[] = {true, false, true};
	
	string arr4[] = {"Manu", "is", "a", "coolkid"};

	// Size of the array in Bytes 
	cout << sizeof(arr) << endl;
	
	cout << sizeof(arr2) << endl;
	
	cout << sizeof(arr3) << endl;
	
	cout << sizeof(arr4) << endl;

	cout << sizeof(arr2)/sizeof(arr2[0]) << endl;

}

int emailStorageSystem() {
	
	string emailStorage[3];
	string response;
	string saved = "Thank you, your email has been saved: ";
	string info = "Please type in your email: ";

	int i = 0;
	while (i < 3) {

		// Exit Mode in email storage system
		if (response == "Exit")
		{
			break;
		}

		cout << info;
		cin >> response;
		emailStorage[0] = response;

		// Exit Mode in email storage system
		if (emailStorage[0] == "Exit")
		{
			break;
		}

		cout << saved << emailStorage[0] << endl << endl;
		emailStorage[0] += 1;

		++i;

		if (i == 3)
		{
			cout << "Can't store more emails, but thanks for visiting us!!" << endl;
		} 

	}

	return 0;
}



