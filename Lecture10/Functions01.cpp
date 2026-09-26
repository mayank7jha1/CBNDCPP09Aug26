#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

/*
 * 1. Function Prototype
 * 2. Function Definition
 * 3. Function Call
 */

// Motivation : Find the sum of 2 numbers given to us by the user.

// Function Prototype:
int Sum(int, int);

void Sum02(int a, int b) {
  int ans = a + b;
  cout << ans << endl;

  return;
}

int main() {
  int x, y;
  cin >> x >> y;

  // Function Call:
  int ans = Sum(x, y);
  cout << ans << endl;

  Sum02(x, y);

  // cout << a << " " << b << endl;

  return 0;
}

// Function Definition:
int Sum(int a, int b) {
  int ans = a + b;
  return ans;
}
