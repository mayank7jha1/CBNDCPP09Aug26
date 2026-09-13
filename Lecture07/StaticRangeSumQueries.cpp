#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  int a[n + 1]{}; // Because of 1 based indexing in the current question.
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  for (int i = 1; i <= q; i++) {
    // For every query : l,r
    // SubIdea: Find the sum of the range l to r.
    int l, r;
    cin >> l >> r;

    int sum = 0; // Current Query sum:
    for (int j = l; j <= r; j++) {
      sum += a[j];
    }

    cout << sum << endl;
  }

  return 0;
}
