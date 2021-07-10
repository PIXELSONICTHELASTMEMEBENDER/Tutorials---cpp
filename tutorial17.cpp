#include <iostream>
#include <map>
using namespace std;

int main() {
  string test = "Hello world my name is Manu! mmmmmmmeeee";
  map<char, int> freq;

  for (int i = 0; i < test.length(); ++i) {
    char letter = test[i];
    
    if (freq.find(letter) == freq.end()) {
      freq[letter] = 0;

    }
    freq[letter]++;
  }

  for (auto itr = freq.begin(); itr != freq.end(); ++itr) {
    cout << itr->first << ": " << itr->second << endl; 
  }
}

int mapExample() {
  // Creating a Map
  map<char, int> mp = {
    {'T', 7},
    {'S', 8},
    {'A', 4}
  };
  mp['V'] = 10;
  pair<char, int> p1('J', 5);
  mp.insert(p1);
  
  // Iterating through a map
  for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    cout << itr->first << endl;
    cout << itr->second << endl;
  }

  return 0;
}

/*
pair_name.second OR first gives you the first or second value
mp.size() gives you the size of the map
mp.erase() erases that pair
mp.clear() clears the entire map
mp.empty() checks if the map is empty or not (1 = true, 0 = false)
*/