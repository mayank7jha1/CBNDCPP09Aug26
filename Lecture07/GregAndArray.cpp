#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e2 + 2;
int a[N]{}, l[N]{}, r[N]{}, d[N]{};

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

  // Computations : ~n^3 : 10^15
  for (int i = 1; i <= k; i++) {
    int x, y;
    cin >> x >> y;

    // I have to perform operation number x to operation number y in array a.
    for (int j = x; j <= y; j++) {
      // Current Operation Number is : j
      // Aapko jth operation perform karne ka kya matlab hain:
      // Array a me index l[j] se lekar r[j] tak aapko d[j] ko add karna hain.

      for (int z = l[j]; z <= r[j]; z++) {
        a[z] += d[j];
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
