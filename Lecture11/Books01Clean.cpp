#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = INT_MIN;

  // Computation : n*n
  for (int sp = 0; sp < n; sp++) {
    int count = 0;
    int tc = 0;
    for (int ep = sp; ep < n; ep++) {
      tc += a[ep];
      if (tc > t) { 
        break;
      }
      count++;
    }
    ans = max(ans, count);
  }

  cout << ans << endl;

  return 0;
}
