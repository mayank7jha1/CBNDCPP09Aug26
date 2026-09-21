#include <iostream>
using namespace std;
#define int long long

int32_t main() {

  int n, k;
  cin >> n >> k;

  int a[n + 1]{};
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  // Build your prefix array 1-based indexing wise.
  int pre[n + 2]{};

  // Techinically Aapne maxi and mini ko initialise kiya hain zero se.
  int maxi = pre[0];
  int mini = pre[0];

  for (int i = 1; i <= n; i++) {
    pre[i] = pre[i - 1] + a[i];

    if (maxi < pre[i]) {
      maxi = pre[i];
    }

    if (mini > pre[i]) {
      mini = pre[i];
    }
  }

  // Check and Build the shifted freq array simultaneously.
  int count = 0;

  // For Building and checking we are iterating over the prefix array.
  // Even though everything is build based on 1- based indexing we are
  // building shifted freq array from iterating over prefix array from 0
  // because we want to take care of that extra 0 freq from the start only.

  int freq[maxi - mini + 1]{};

  for (int i = 0; i <= n; i++) {
    int target = pre[i] - k;
    int ss = target - mini;

    // Pehle Check baad me update the freq.
    if (target >= mini and target <= maxi) {
      // Aapko ye dekhna hain ki is pre[i]-k ki kitni freq pehle aachuki hain.
      // Lekin yaad rakhna aapne freq array shifted scale par banaya hain.
      // This is what os logic would look like.
      // count += (freq[pre[i]-k]);

      count += freq[ss];
    }

    // Update the freq;
    freq[ss]++;
  }

  return 0;
}
