#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v1 = {1, 2, 3, 4};
  
  for (int i = 0; i < v1.size(); ++i) {
    cout << v1[i] << endl << endl;
  }

  for (auto itr = v1.begin(); itr != v1.end(); ++itr) {
    cout << *itr << endl;
  }
  
}

/*

Definition:
Vector - sequence containers representing arrays that can change in size

Accessing Elements in a Vector:
vector_Name.front() - gives you first element
vector_Name.back() - gives you last element
vector_Name.size() - gives you the number of elements in the Vector
vector_Name.capacity() - give you the number of Elements it CAN currently hold

Changing Elements in a Vector:
vector_Name.insert(vector_Name.being(), some_Value) - inserts a value into a position in the Vector
vector_Name.erase(vector_Name.being()) - erases a value from a specific position in the Vector
vector_Name.push_back() - appending an element in to the Vector
vector_Name.pop_back() - removes an element from the end of the Vector
vector_Name.shrink_to_fit() - reduces the capacity of the container to fit its size and destroys all elements beyond the capacity

*/