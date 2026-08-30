#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
using namespace std;
#define endl "\n"
#define int long long

// int : 4 byte : +-10^9

int32_t main() {
  // Definition of a Variable
  int n;
  cin >> n;

  if (n == 0 or n == 1) {
    cout << n << endl;
    return 0;
  }

  int p1{0}, p2{1};
  int ans, c{2};

  while (true) {
    ans = p1 + p2;

    if (ans == n) {
      cout << "Yes" << endl;
      break;
    }

    if (ans > n) {
      cout << "No" << endl;
      break;
    }

    p1 = p2;
    p2 = ans;
    c++;
  }

  return 0;
}
