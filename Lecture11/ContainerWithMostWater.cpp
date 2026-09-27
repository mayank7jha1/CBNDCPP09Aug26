#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// int maxArea(int h[], int &n) {
//   // cout << h << endl;
//   // cout << *(h + 1) << endl;
//   // cout << h[1] << endl;
//   //[] : Value of:
//   n = 100;
//   h[2] = 10; //*(h+2)=10;
//   for (int i = 0; i < n; i++) {
//     cout << h[i] << " ";
//   }
// }

int maxArea(int *a, int n) {
  int i = 0;
  int j = n - 1;
  int ans = 0; // This answer variable will store the maximum area till now.

  while (i < j) {
    // Current Choti wall ka contribution/ max area nikalo:
    int area = (j - i) * min(a[i], a[j]);
    ans = max(ans, area);

    if (a[i] < a[j]) {
      i++;
    } else {
      j--;
    }
  }

  return ans;
}

int main() {
  int n;
  cin >> n;

  int height[n];
  for (int i = 0; i < n; i++) {
    cin >> height[i];
  }

  // cout << height << endl; // 8084
  // cout << n << endl;
  // cout << height[2] << endl;
  // cout << n << endl;

  // height is passed by address and n is passed by value.
  cout << maxArea(height, n) << endl;

  return 0;
}
