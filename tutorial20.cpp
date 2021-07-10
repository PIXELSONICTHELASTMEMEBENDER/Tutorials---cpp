#include <iostream>
#include <string>
using namespace std;

// Pass by pointer and reference
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a = 2;
  int b = 4;
  cout << a << endl;
  cout << b << endl;
  swap(&a, &b);
  cout << a << endl;
  cout << b << endl;  
}

/*
Functions - are a block of code that take in parameters and have a return type
Functions - are also very handy in reuseablity (saves a lot of space and time)
*/

/*
Creating a Function:

functionType functionName(parameters) {
  body
  return type (functionType) // Returning the same type as the function
}

Calling a Function:

functionname(arguments)
*/

/*

// Functions in Functions
void print(string text) {
  cout << text << endl;
}

void printNTimes(int n, string text) {
  for (int i = 0; i < n; ++i) {
    print(text);
  }

}

// Functions with void
void user() {
  cout << "adfadsf" << endl;
  // notice that there is no return statement needed
  // you can't add a return statement anyway
}


// Functions with parameters
int add(int x, int y) {
  return x + y;
}

// Functions without parameters
double getNum() {
  return 567678;
}

// Functions with Default parameters
int doMath(int x, int y, int z = 1) {
  return (x + y) * z;
}


int main() {
  cout << doMath(3, 4) << endl;
  
}

// Weird Function return types
pair<string, string> makePair(string fname, string lname) {
  return pair<string, string>(fname, lname);
}

int main() {
  cout << makePair("Hello", "Bob").first << endl;
  
}

*/