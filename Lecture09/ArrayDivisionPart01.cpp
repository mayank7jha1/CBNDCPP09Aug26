#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int a[n]{};
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  if (sum % 2 == 1) {
    cout << "NO" << endl;
    return 0;
  }

  sum /= 2;

  // For every division you need to compute :
  //  ls
  //  x = ls-s/2
  //  and then check for the element x .

  int ls = 0;
  int freq[100001]{};

  for (int i = 0; i < n; i++) {

    ls = ls + a[i];
    int x = ls - sum;
    // cout << x << endl;

    if (freq[x] > 0) {
      cout << "Yes" << endl;
      return 0;
    }

    freq[a[i]]++;
  }

  int freq2[100001]{};
  
  int rs = 0;
  for (int i = n - 1; i >= 0; i--) {
    rs += a[i];
    int x = rs - sum;

    if (freq2[x] > 0) {
      cout << "Yes" << endl;
      return 0;
    }

    // Update:
    freq[a[i]]++;
  }

  cout << "No" << endl;

  return 0;
}
