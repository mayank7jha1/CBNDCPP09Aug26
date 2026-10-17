#include <algorithm>>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;

bool C1(string &x, string &y) {
  string xy = x + y;
  string yx = y + x;

  if (xy > yx) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int n;
  cin >> n;

  string s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  sort(s, s + n, C1);

  string ans{""};
  for (int i = 0; i < n; i++) {
    ans += s[i];
  }

  cout << ans << endl;

  return 0;
}
