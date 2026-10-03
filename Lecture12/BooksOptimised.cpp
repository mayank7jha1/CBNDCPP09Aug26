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

  int ans = INT_MIN; // Maximum books you were abl to read across all the index.
  int tc = 0;        // Current Window me kitna time consumed hua.

  int sp = 0, ep = 0;

  // Expand Till you can:
  for (; ep < n; ep++) {

    // Task: Expansion:
    tc += a[ep];

    // Check and Shrink:
    while (sp <= ep and tc > t) {
      tc -= a[sp];
      sp++;
    }

    // Updation:
    ans = max(ans, ep - sp + 1);
  }

  cout << ans << endl;

  return 0;
}
