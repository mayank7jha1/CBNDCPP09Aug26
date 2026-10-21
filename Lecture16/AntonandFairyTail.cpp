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

  int day = 1;
  int bg = n;

  while (bg > 0) {

    // How many sparrow will come today?
    bg -= day; // Now this is the grain jo barn me hain shaam ko.

    if (bg <= 0) {
      break;
    }

    day++;
    bg += m;
    if (bg > n) {
      bg = n;
    }
  }
  

  cout << day << endl;

  return 0;
}
