#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e5 + 3;

// F(x) : Min Cost from xth stone to 1st stone.
int n;
int height[N]{};
int dp[N]{};
// Computations : No of Unique States * Transition Time.
// ~ n * 1

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> height[i];
  }

  dp[1] = 0;
  dp[2] = abs(height[1] - height[2]);

  for (int i = 3; i <= n; i++) {
    int Op1 = abs(height[i] - height[i - 1]) + dp[i - 1];
    int Op2 = abs(height[i] - height[i - 2]) + dp[i - 2];
    dp[i] = min(Op1, Op2);
  }

  cout << dp[n] << endl;

  return 0;
}
