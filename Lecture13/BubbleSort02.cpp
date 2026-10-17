#include <algorithm>
#include <iostream>

using namespace std;

bool Compare(int &x, int &y) {

  // if (x > y) {
  //   return true; // No Swapping:
  // } else {
  //   return false;
  // }

  return (x > y);
}

int main() {

  int n;
  cin >> n;

  int a[n]{};
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // for (int i = 0; i < n - 1; i++) {
  //   for (int j = 0; j < n - i - 1; j++) {
  //     if (Compare(a[j], a[j + 1]) == false) {
  //       int temp = a[j];
  //       a[j] = a[j + 1];
  //       a[j + 1] = temp;
  //     }
  //   }
  // }

  // Sort STL: Fastest : ~nlogn:
  //  sort(a, a + n, less<int>());

  sort(a, a + n, Compare);
  // reverse(a, a + n);

  /*
        less<int>
        greater<int>
        less_equal<int>
        greater_equal<int>

  */

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
