#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int k;
  cin >> k;

  // prefix(i) = prefix(i-1) + a(i)
  vector<int> prefix(n, 0);
  prefix[0] = a[0];
  for (int i = 1; i < n; i++)
    prefix[i] = prefix[i - 1] + a[i];

  int mini = 0, maxi = 0;
  for (int i = 0; i < n; i++) {
    mini = min(mini, prefix[i]);
    maxi = max(maxi, prefix[i]);
  }

  // shifted = original - mini
  vector<int> freq(maxi - mini + 1, 0);

  freq[0 - mini] = 1;

  long long count = 0;
  for (int i = 0; i < n; i++) {
    long long target = prefix[i] - k;
    if (target >= mini && target <= maxi) {
      count += freq[target - mini];
    }

    freq[prefix[i] - mini]++;
  }

  cout << count << endl;
  return 0;
}
