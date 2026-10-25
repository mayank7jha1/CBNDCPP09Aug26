#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> &v) {

  int s = 0, e = v.size() - 1;
  int ans = INT_MAX;

  while (s <= e) {
    int mid = (s + e) / 2;

    if (v[s] <= v[mid]) {
      ans = min(ans, v[s]);
      s = mid + 1;
    } else {
      ans = min(ans, v[mid]);
      e = mid - 1;
    }
  }

  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  cout << findMin(v) << endl;
  return 0;
}
