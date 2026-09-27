#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = INT_MIN;
  // Computations : ~n*k
  for (int i = 0; i <= (n - k); i++) {
    int sum = 0;
    for (int j = i; (j < i + k) and (j < n); j++) {
      sum += a[j];
    }
    ans = max(ans, sum);
  }

  cout << ans << endl;

  int ans02 = 0;

  // Find the sum of first k elements or first window.
  for (int i = 0; i < k and i < n; i++) {
    ans02 += a[i];
  }

  // Constant Size window:
  //  Add the new element to the window and remove the last element from the
  //   window.

  // Computations : ~2*n
  int maxi = ans02;
  int j = 0;
  // Window  : j se lekar i tak.
  // Elements : (i-j+1)
  // Window ka size : (i-j)
  for (int i = k; i < n; i++) {
    int ce = a[i];
    // Expansion the window till you can.
    ans02 += ce;

    // If in undesired window shrink till you can.
    ans02 -= a[j];

    // I have found a new window:
    maxi = max(maxi, ans02);
    j++;
  }

  cout << maxi << endl;

  return 0;
}
