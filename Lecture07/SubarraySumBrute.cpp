#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define endl "\n"

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Idea: Go to every index of the array and treat the the current index as the
  // starting point of the subarray.
  // SubIdea: For this current Starting point of the subarray go to every end
  // point of the subarray.
  // Now Print this current subarray from given starting point to end point.

  for (int sp = 0; sp < n; sp++) {

    // SubIdea: Current Starting point for the subarray : sp:
    // For this current sp go to every end point.
    for (int ep = sp; ep < n; ep++) {

      // Current Subarray: [sp,ep]

      int sum = 0; // Current Subarray sum.

      for (int k = sp; k <= ep; k++) {
        sum += a[k];
      }

      cout << sum << endl;
    }

    
  }

  return 0;
}
