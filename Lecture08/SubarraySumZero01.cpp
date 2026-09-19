#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  // I am building everyhthing in terms of 1 based indexing.
  int a[n + 1]{};
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  // Method 01: Go to every subarray and check if the current subarray sum is
  // equal to zero or not?
  int flag = 0;
  // COmputations : n*n*n
  for (int sp = 1; sp <= n; sp++) {
    for (int ep = sp; ep <= n; ep++) {

      // Current Subarray : [sp,ep] :
      // We need the sum of current subarray:
      int sum = 0;
      for (int k = sp; k <= ep; k++) {
        sum += a[k];
      }

      // Current Subarray Sum is stored in variable sum.

      if (sum == 0) {
        cout << "Yes" << endl;
        flag = 1;
        break;
      }
    }
    // We will be here:
    if (flag == 1) {
      break;
    }
  }

  // We are here now:
  if (flag == 0) {
    cout << "No" << endl;
  }

  return 0;
}
