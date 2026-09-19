#include <climits>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  // I am building everything in terms of 1 based indexing.
  int a[n + 1]{};
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  // Build the Prefix array:
  int pre[n + 2]{};

  int mini = INT_MAX;
  int maxi = INT_MIN;

  for (int i = 1; i <= n; i++) {

    pre[i] = pre[i - 1] + a[i];

    cout << pre[i] << " ";

    if (mini > pre[i]) {
      mini = pre[i];
    }

    if (maxi < pre[i]) {
      maxi = pre[i];
    }
  }

  int freq[maxi - mini + 1]{};

  // Original Prefix array par iterate kar rahe hain lekin 0 index se.
  int flag = 0;
  for (int i = 0; i <= n; i++) {
    int ss = pre[i] - mini;

    // Check if You have found a subarray whose sum is zero:
    if (freq[ss] > 0) {
      flag = 1;
      break;
    }

    freq[ss]++;
  }

  if (flag == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
