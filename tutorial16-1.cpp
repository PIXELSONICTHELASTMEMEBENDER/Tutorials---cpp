#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main() {
  int v;
  char x, y;
  string z;

  // Tuple Concatenation
  tuple <int, char> t1(22, 'V');
  tuple <char, string> t2('B', "Jack Blake");
  tuple <int, char, char, string> t3 = tuple_cat(t1, t2); // Can use the word auto but not encouraged

  tie(v, x) = t1;
  tie(y, z) = t2;

  cout << v << endl << endl;
  cout << x << endl << endl;
  cout << y << endl << endl;
  cout << z << endl << endl;
}