#include <iostream>
#include <string>
using namespace std;

int main() {
	string beautifulSong = "Para Para Paradise Para Para Paradise Para Para Paradise";
	int x [5];
	int dupli[9] = {1, 1, 2, 3, 5, 6, 7, 7, 2};
	
	// For loop
	for (int i = 0; i < sizeof(x)/sizeof(x[0]); ++i)
	{
		x[i] = i;
	}

	for (int i = 0; i < sizeof(x)/sizeof(x[0]); ++i)
	{
		cout << x[i] << endl;
	}

}




