#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

vector<int> f, s;
vector<int> S1, S2;

bool C1(int x, int y) {
  // In x and y ke karan kin do pair me
  //  comparison horaha hain:
  // P1 : (f[x],s[x])
  // P2 : (f[y],s[y])

  if (s[x] > s[y]) {
    return true;
  } else {
    return false;
  }
}

bool C2(int x, int y) {
  // In x and y ke karan kin do pair me
  //  comparison horaha hain:
  // P1 : (f[x],s[x])
  // P2 : (f[y],s[y])

  if (f[x] < f[y]) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;

    f.push_back(x);
    s.push_back(y);

    if (x > y) {
      S2.push_back(i);
    } else {
      S1.push_back(i);
    }
  }

  if (S1.size() > S2.size()) {
    // Sequence 1 is greater and you just need
    //  to arrange sequence 1.

    // Sort all the pairs of this sequence in
    //  desc. order of the second element.
    cout << S1.size() << endl;
    sort(S1.begin(), S1.end(), C1);

    for (auto x : S1) {
      cout << x + 1 << " ";
    }

  } else {
    // Sequence 2 is greater and you just need
    //  to arrange sequence 2.

    cout << S2.size() << endl;
    sort(S2.begin(), S2.end(), C2);

    for (auto x : S2) {
      cout << x + 1 << " ";
    }
  }

  return 0;
}
