#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

long long firstBadVersion(int n) {
  long long s = 1, e = n;
  long long ans = n;

  while (s <= e) {
    long long mid = (s + e) / 2;
    if (isBadVersion(mid) == true) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }
  return ans;
}

int main() {
  int n;
  cin >> n;

  cout << firstBadVersion(n) << endl;

  return 0;
}
