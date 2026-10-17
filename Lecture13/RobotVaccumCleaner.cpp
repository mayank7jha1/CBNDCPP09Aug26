#include <algorithm>
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

int Noise(string &s) {
  int ans{};
  int count = 0;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 's') {
      count++;
    } else {
      ans += count;
    }
  }
  return ans;
}

bool Compare(string &x, string &y) {

  string xy = x + y;
  string yx = y + x;

  if (Noise(xy) > Noise(yx)) {
    return true;
  } else {
    return false;
  }
}

int32_t main() {
  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  sort(s, s + n, Compare);

  string ans{""};
  for (int i = 0; i < n; i++) {
    ans += s[i];
  }

  cout << Noise(ans) << endl;

  return 0;
}
