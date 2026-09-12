#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int key;
  cin >> key;

  // Count represents how many times this key has occured till now.
  int count = 0;
  // Idea : Go to every element and find the number of times the current element
  // is equal to the key.
  for (int i = 0; i < n; i++) {
    if (a[i] == key) {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
