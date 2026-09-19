#include <iostream>
using namespace std;
#define endl "\n"
#define int long long
const int N = 1e5 + 5;
int a[N]{}, l[N]{}, r[N]{}, d[N]{};
int opc[N]{};
int difference[N]{};

int32_t main() {

  int n, m, k;
  cin >> n >> m >> k;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  for (int i = 1; i <= m; i++) {
    cin >> l[i] >> r[i] >> d[i];
  }

  // Computations  : ~k
  for (int i = 1; i <= k; i++) {
    int x, y;
    cin >> x >> y;

    // Build the Operation Count array:
    opc[x]++;
    opc[y + 1]--;
  }

  // Computations : ~m
  //  Take the prefix of opc array: to build the opc.
  for (int i = 1; i <= m; i++) {
    opc[i] = opc[i - 1] + opc[i];
  }

  // for (int i = 1; i <= n; i++) {
  //   cout << opc[i] << " ";
  // }

  // Build the Difference Array to resolve the other range:
  // We are iterating over the operation array and building the difference
  // array.

  // Computations : ~m
  for (int i = 1; i <= m; i++) {
    // Current Operation: i: l[i] se lekar r[i] tak (opc[i]*d[i]) ko add kariye.
    int x = l[i];
    int y = r[i];

    difference[x] += (opc[i] * d[i]);
    difference[y + 1] -= (opc[i] * d[i]);
  }

  // Computations : ~n
  //  Take Prefix of Difference Array:
  for (int i = 1; i <= n; i++) {
    difference[i] = difference[i - 1] + difference[i];
  }

  // Computations : ~n
  for (int i = 1; i <= n; i++) {
    a[i] += difference[i];
  }

  for (int i = 1; i <= n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
