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
  int freq[maxi - mini + 1]{};

  for (int i = 0; i <= n; i++) {
    int CurrentElement = pre[i];

    // This is the element you are looking for accoring to logic.
    int target = pre[i] - k;

    // Element in Shifted Scale.
    int ss = target - mini;

    // Pehle Check baad me update the freq.
    if (target >= mini and target <= maxi) {
      // Target aap original scale me hain aapko target shifted scale me dhundna
      // hain.
      count += freq[ss];
    }

    // Update the freq accoring to the current element in shifted scale.
    freq[pre[i] - mini]++;
  }

  return 0;
}
