#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n]{};
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int pre[n + 1]{};
  pre[0] = a[0];
  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  int suffix[n + 1]{};
  suffix[n - 1] = a[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    suffix[i] = suffix[i + 1] + a[i];
  }

  

  return 0;
}
