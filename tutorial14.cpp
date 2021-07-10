#include <iostream>
#include <string>
using namespace std;
/*
Pointers - *y
References - &y
*/


int main() {
	int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *head = x;

	for (int i = 0; i < 10; ++i)
	{
		head = x + i;
		cout << *head << endl;
	}
}

/*

Pointer Rules:

1. Don't need to initialize them, they can be empty; ex. int *y;

2. They can be equal to NULL; ex. int *h = NULL

3. Can point to another pointer; ex. int *y = *x

4. Pointer variable can only point to a MEMORY ADDRESS location; ex. int *y = &x NOT int *y = x

5. Don't need "&" when we are dealing with ARRAYS, but you can do this! ex. int *head = &x[0]

Pointer Tips:

1. Putting a "*" in front of a variable while doing cout, gives you the actual value instead of the location itself.

*/