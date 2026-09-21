#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[n + 1]{};
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  // Prefix Array :
  int pre[n + 2]{};

  for (int i = 1; i <= n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  // This is to ensure minimum element is atleast 0.
  int mini = pre[0];
  int maxi = pre[0];

  for (int i = 1; i <= n; i++) {
    if (mini > pre[i]) {
      mini = pre[i];
    }
    if (maxi < pre[i]) {
      maxi = pre[i];
    }
  }

  // Shifted Freq Array:
  int freq[maxi - mini + 1]{};
  // Building My Freq array and checking simultaneously.

  // int flag = 0;
  // for (int i = 1; i <= n; i++) {
  //   // Pre[i]=k;
  //   // Subarray sum k ke barabar hain:
  //   if (pre[i] == k) {
  //     flag = 1;
  //     break;
  //   }

  //   // pre[i]-k vala check:
  //   int target = pre[i] - k;

  //   if (target >= mini and target <= maxi and freq[target - mini] > 0) {
  //     flag = 1;
  //     break;
  //   }

  //   // Build the freq array
  //   freq[pre[i] - mini]++;
  // }

  int flag = 0;
  for (int i = 0; i <= n; i++) {

    // pre[0] which is zero : so you are saying in freq array we have an freq of
    // 0 in original scale.
    
    // pre[i]-k vala check:
    int target = pre[i] - k;

    if (target >= mini and target <= maxi and freq[target - mini] > 0) {
      flag = 1;
      break;
    }

    // Build the freq array
    freq[pre[i] - mini]++;
  }

  return 0;
}
