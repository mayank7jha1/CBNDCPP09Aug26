#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;
const int N = 1e5 + 3;
int n;
int a[N]{}, b[N]{}, c[N]{};

// dp[x][y] = F(x,y) : Maximum happiness from xth day to 1st day while
// performing yth activity on the xth day.
int dp[N][4]{};

// Computations : 10^5*4*1

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  dp[1][1] = a[1];
  dp[1][2] = b[1];
  dp[1][3] = c[1];

  for (int i = 2; i <= n; i++) {
    dp[i][1] = a[i] + max(dp[i - 1][2], dp[i - 1][3]);
    dp[i][2] = b[i] + max(dp[i - 1][1], dp[i - 1][3]);
    dp[i][3] = c[i] + max(dp[i - 1][1], dp[i - 1][2]);
  }

  cout << max({dp[n][1], dp[n][2], dp[n][3]}) << endl;

  return 0;
}
