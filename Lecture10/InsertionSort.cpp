#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int a[n]{};
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Idea: Maintain 2 halves and try to put the elements from 1 to n-1 from the
  // unsorted region to the sorted region.

  for (int i = 1; i < n; i++) {
    int ce = a[i];
    // Sorted Region : 0 to i-1 and Unsorted Region is i to n-1.
    int j = i - 1;

    while (j >= 0 and a[j] > ce) {
      // Shift:
      a[j + 1] = a[j];
      j--;
    }

    // Now you know the correct position of the current element which is j+1.
    a[j + 1] = ce;
  }

  for (auto x : a) {
    cout << x << " ";
  }

  
}
