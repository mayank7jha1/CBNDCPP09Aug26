#include <climits>
#include <cstring>
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

  int flag = 0;
  for (int i = 0; i <= n; i++) {

    int currentElement = pre[i];
    int target = pre[i] - k; //(This target is in os.) This is the element that
                             // you need to find befroe this i.
    // We need to check freq in ss. ss = os - mini;

    if (target >= mini and target <= maxi and freq[target - mini] > 0) {
      flag = 1;
      break;
    }

    // Build the freq array according to the current element not target in
    // shifted scale.
    freq[pre[i] - mini]++;
  }

  return 0;
}
