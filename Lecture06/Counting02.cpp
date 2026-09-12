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

  // Go to every element to find the frequency of each element:
  for (int i = 0; i < n; i++) {
    int ce = a[i];
    // SubIdea: For the current element find its freq in the array.
    // Explanation : Go to every element of the array and find this
    // ce is occurring how many times.
    // Count represents how many times this key has occured till now.
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (a[j] == ce) {
        count++;
      }
    }
    cout << ce << " " << count << endl;
  }

  return 0;
}
