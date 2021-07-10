#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "hello world!";
	cout << str.size() << endl;

	for (int i = 0; i < str.length(); ++i)
	{
		char chr = str[i];
		cout << chr << endl;
	}


}