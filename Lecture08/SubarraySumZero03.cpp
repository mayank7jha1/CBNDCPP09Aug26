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

  for (int i = 1; i <= n; i++) {
    int os = pre[i];
    int ss = os - mini;
    freq[ss]++;
  }

  cout << mini << endl;

  // Idea:
  // 1. Original Scale me : Zero ki frequency > 0 hain.
  // 2. Kisi aur element ki freq > 1 hain (Ye shifted Scale me bhi chalega.)
  // How do we club them: 0 ki freq ko aap ek elements extra dedo.

  if ((0 - mini) >= 0 and freq[0 - mini] > 0) {
    cout << "Yes" << endl;
    return 0;
  }

  for (int i = 0; i < maxi - mini + 1; i++) {
    if (freq[i] > 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
