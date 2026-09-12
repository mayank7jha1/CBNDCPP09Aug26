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
  // Computations : ~n*n
  for (int i = 0; i < n; i++) {
    int ce = a[i];

    if (ce == INT_MAX) {
      // For this current you don't need the frequency.
      // Skip to the next element:
      // All the line from line 30 to line 41 will not execute when I am here.
      continue;
    }

    int count = 0;
    for (int j = 0; j < n; j++) {
      if (a[j] == ce) {
        count++;
        a[j] = INT_MAX;
      }
    }
    cout << ce << " " << count << endl;
  }

  return 0;
}
