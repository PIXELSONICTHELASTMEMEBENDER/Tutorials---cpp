#include <tuple>
#include <string>
#include <iostream>
using namespace std;

int main() {
  int x, y;

  // Creating a Tuple (1)
  tuple <int, string> person(20, "Talking Tom");
  
  // Printing the Value in a Tuple (2)
  cout << endl << get<1>(person) << endl;
  
  // Changing the Value in a Tuple (3)
  get<1>(person) = "Chicken Nuggie";
  
  // Printing it again (don't need to add this part)
  cout << get<1>(person) << endl << endl;

  tuple <int, char, bool, float, string> theMysticThing;
  
  // Intializing the Values here
  theMysticThing = make_tuple(23, 'E', true, 6.33, "The Solo Guitarist");
  cout << get<0>(theMysticThing) << endl << endl;
  cout << get<1>(theMysticThing) << endl << endl;
  cout << get<2>(theMysticThing) << endl << endl;
  cout << get<3>(theMysticThing) << endl << endl;
  cout << get<4>(theMysticThing) << endl << endl;
  
  // Swapping tuples
  tuple <int, int> t1 = make_tuple(1,2);
  tuple <int, int> t2 = make_tuple(3,4);

  // The Swap command (swaps tuples)
  // t1.swap(t2);

  // // cout << get<0>(t1) << endl;
  // // cout << get<1>(t1) << endl;
  // // cout << get<0>(t2) << endl;
  // // cout << get<1>(t2) << endl;

  // The "tie()" function
  tie(x, y) = t1;
  cout << x << endl;
  cout << y << endl;

}