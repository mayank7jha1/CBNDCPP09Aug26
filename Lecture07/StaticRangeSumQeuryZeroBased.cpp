#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

int32_t main() {
  int n, q;
  cin >> n >> q;

  int a[n]{}; // Elements hain : [0,n-1]
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Building the prefix array for 1-based indexing:
  int pre[n + 1]{}; // We are advised to take the size of prefix array 1 extra
                    // than the original array.
  pre[0] = a[0];
  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  for (int i = 1; i <= q; i++) {
    // For every query : l,r
    // SubIdea: Find the sum of the range l to r.
    int l, r;
    cin >> l >> r;
    // Question is based on 1 based indexing and you are taking every thing in
    //  zero based index.
    l--, r--;

    if (l == 0) {
      cout << pre[r] << endl;
    } else {
      cout << pre[r] - pre[l - 1] << endl;
    }
  }

  return 0;
}
