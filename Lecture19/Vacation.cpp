#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;
const int N = 1e5 + 3;
int n;
int a[N]{}, b[N]{}, c[N]{};

// F(x,y) : Maximum happiness from xth day to 1st day while performing yth
// activity on the xth day.
int dp[N][4]{};

// Computations : 10^5*4*1

int F(int n, int y) {
  // Current State : F(n,x):
  if (n == 0) {
    // Current State : F(0,something) : 0;
    return 0;
  }

  // Check :
  if (dp[n][y] != -1) {
    // Current State : F(n,y) is already calculated uska answer humne
    //  dp[n][y] me store kiya hain so directly return kardo.
    return dp[n][y];
  }

  // Current State : F(n,x):

  int Op1 = 0, Op2 = 0, Op3 = 0;

  // nth day par aap activity 1 kar rahe ho:
  if (y == 1) {
    Op1 = a[n] + max(F(n - 1, 2), F(n - 1, 3));
  }

  if (y == 2) {
    Op2 = b[n] + max(F(n - 1, 1), F(n - 1, 3));
  }

  if (y == 3) {
    Op3 = c[n] + max(F(n - 1, 1), F(n - 1, 2));
  }

  // Current State : F(n,y) and aapke pass ab nth day ka answer pada hain:
  int ans = max({Op1, Op2, Op3});

  // answer variable stores the maximum happiness till the nth day from 1st day.
  return (dp[n][y] = ans);
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  memset(dp, -1, sizeof(dp));

  // Recursion from back:
  // Starting Point :

  int Op1 = F(n, 1);
  int Op2 = F(n, 2);
  int Op3 = F(n, 3);

  cout << max({Op1, Op2, Op3}) << endl;

  return 0;
}
