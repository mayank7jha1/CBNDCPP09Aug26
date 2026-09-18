#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e2 + 2;
int a[N]{}, l[N]{}, r[N]{}, d[N]{};
int opc[N]{};

int main() {

  int n, m, k;
  cin >> n >> m >> k;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  for (int i = 1; i <= m; i++) {
    cin >> l[i] >> r[i] >> d[i];
  }

  // One Single Operation  Looks Like this : Update l[i] to r[i] with value
  // +d[i].

  // n
  for (int i = 1; i <= k; i++) {
    int x, y;
    cin >> x >> y;

    // Build the Operation Count array:
    opc[x]++;
    opc[y + 1]--;
  }

  // Take the prefix of opc array: to build the opc.
  for (int i = 1; i <= m; i++) {
    opc[i] = opc[i - 1] + opc[i];
  }

  for (int i = 1; i <= n; i++) {
    cout << opc[i] << " ";
  }

  // n*m
  for (int j = 1; j <= m; j++) {
    // Current Operation : l[j] se lekar r[j] tak d[j] ko add kardo.
    for (int z = l[j]; z <= r[j]; z++) {
      a[z] += (opc[j] * d[j]);
    }
  }

  cout << endl;

  for (int i = 1; i <= n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
