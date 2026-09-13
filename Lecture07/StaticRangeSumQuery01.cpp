#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

int32_t main() {
  int n, q;
  cin >> n >> q;

  int a[n + 1]{}; // Because of 1 based indexing in the current question.
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  // Building the prefix array for 1-based indexing:
  int pre[n + 2]{}; // We are advised to take the size of prefix array 1 extra
                    // than the original array.
  pre[1] = a[1];
  for (int i = 2; i <= n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  for (int i = 1; i <= q; i++) {
    // For every query : l,r
    // SubIdea: Find the sum of the range l to r.
    int l, r;
    cin >> l >> r;

    if (l == 1) {
      cout << pre[r] << endl;
    } else {
      cout << pre[r] - pre[l - 1] << endl;
    }
  }

  return 0;
}
