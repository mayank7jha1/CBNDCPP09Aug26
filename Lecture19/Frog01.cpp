#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e5 + 3;

// F(x) : Min Cost from xth stone to nth stone.
int n;
int height[N]{};

int F(int x) {
  // Current State: F(x):
  // Stopping Point:
  if (x == n) {
    // Current State : F(n) = 0;
    return 0;
  }

  // Current State: F(x):
  // I will store the answer for the current state in ans variable.
  // I am current at xth stone .

  // I will jump one step from xth stone to x+1th stone and then ask recursion
  // to compute the rest.
  int Op1 = abs(height[x] - height[x + 1]) + F(x + 1);

  // I will jump two step from xth stone to x+2nd stone and then ask recursion
  // to compute the rest.
  // It should exist also.

  int Op2 = INT_MAX;
  if (x + 2 <= n) {
    Op2 = abs(height[x] - height[x + 2]) + F(x + 2);
  }

  // Current State : F(x):
  int ans = min(Op1, Op2);

  return ans;
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> height[i];
  }

  // Recursion from front:
  //  Starting Point :
  cout << F(1) << endl;

  return 0;
}
