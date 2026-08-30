#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int p;
  cin >> p;

  double ans = 1;

  while (ans * ans <= n) {
    ans++;
  }

  // Because we always stop ahead.
  ans--;

  // Generalised Method for decimal Point precision upto p.
  // Idea: Mujhe p bar 10 se divide karna hain decimalfactor ko.
  //  and har bar current decimalfactor ke respect me precision nikalna hain.

  int i = 1;
  double decimalfactor = 0.1;

  while (i <= p) {

    while (ans * ans <= n) {
      ans = ans + decimalfactor;
    }

    ans = ans - decimalfactor;
    decimalfactor = decimalfactor / 10;

    i++;
  }

  cout << ans << endl;

  return 0;
}
