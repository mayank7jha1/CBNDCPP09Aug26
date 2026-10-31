#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e5 + 3;

// dp[x] = F(x) : Min Cost from xth stone to nth stone.
int n;
int height[N]{};
int dp[N]{};
// Computations : No of Unique States * Transition Time.
// ~ n * 1

int F(int x) {
  // Current State : F(x):
  if (x == n) {
    // Current State : F(n) = 0;
    return 0;
  }

  // Step 1: Check if this state has previously been calculated or not.
  if (dp[x] != -1) {
    // This state has previously been calculated and you don't need to compute
    // it again.
    return dp[x];
  }

  int Op1 = abs(height[x] - height[x + 1]) + F(x + 1);

  int Op2 = INT_MAX;
  if (x + 2 <= n) {
    Op2 = abs(height[x] - height[x + 2]) + F(x + 2);
  }

  // Current State : F(x):
  int ans = min(Op1, Op2);

  // Now I have the answer for the current state : F(x):
  // I am returning the answer.

  // Before returning the current state answer always store it.
  dp[x] = ans;

  return dp[x];
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> height[i];
  }

  memset(dp, -1, sizeof(dp));

  // Recursion from front:
  //  Starting Point :
  cout << F(1) << endl;

  return 0;
}
