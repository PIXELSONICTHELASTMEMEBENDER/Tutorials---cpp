#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
  string AITest = "I'm spock from startrek and I have come here for a mission!";
  string find = "Hello";
  set<char> findLetters;

  for (int i = 0; i < find.length(); ++i) {
    char letters = find[i];
    findLetters.insert(letters);

  }

  for (int i = 0; i < AITest.length(); ++i) {
    char letters = AITest[i];
    findLetters.erase(letters);

  }

  if (findLetters.size() > 0) {
    cout << "NO! It does not have all letters!" << endl;
  } else {
    cout << "YES! It does!" << endl;
  }


}

/*
Sets - each element has to be unique, because the value of the element identifies it. It's also unordered
*/


/*
Set methods and more!

set<char> s1 = {'C', 'S'};

  // Inserting new method in

  s1.insert('B');
  s1.insert('A');
  s1.insert('E');
  s1.insert('Z');

  // Erasing a method

  s1.erase('E');
  s1.erase('Z');

  // Checking if the set contains a specific element

  if (s1.find('B') == s1.end()) {
    cout << "Could not find C" << endl;
  } else {
    cout << "Found C!" << endl;
  }

  // Iterating through a set

  for (auto itr = s1.begin(); itr != s1.end(); ++itr) {
    cout << *itr << endl;
  }
*/


/*
Set Practical Examples

1. for (int i = 0; i < AITest.length(); ++i) {
    char letter = AITest[i];
    exists.insert(letter);

  }

  for (auto itr = exists.begin(); itr != exists.end(); ++itr) {
    cout << *itr << endl;
  }


*/