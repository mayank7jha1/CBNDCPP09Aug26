#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

int32_t main() {

  int n, m;
  cin >> n >> m;
  if (m >= n) {
    cout << n << endl;
    return 0;
  }

  // We are applying binary search to find the first
  //  value of k that satisfies out equation.

  int s = 0, e = 2e9;
  int ans = 0;

  // Computations : log2(2*10^9) : ~40 computations.
  while (s <= e) {
    int mid = (s + e) / 2;
    int LeftSide = (mid * (mid + 1)) / 2;
    int RightSide = n - m;

    if (LeftSide >= RightSide) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  cout << ans + m << endl;

  return 0;
}
