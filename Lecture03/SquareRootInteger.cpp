#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  double ans = 1;

  while (ans * ans <= n) {
    ans++;
  }

  // Because we always stop ahead.
  ans--;

  // 1st Decimal:
  while (ans * ans <= n) {
    ans = ans + 0.1;
  }

  // Because we always stop ahead.
  ans = ans - 0.1;

  // 2nd Decimal:
  while (ans * ans <= n) {
    ans = ans + 0.01;
  }

  // Because we always stop ahead.
  ans = ans - 0.01;

  // 3rd Decimal:
  while (ans * ans <= n) {
    ans = ans + 0.001;
  }

  // Because we always stop ahead.
  ans = ans - 0.001;

  cout << ans << endl;

  return 0;
}
