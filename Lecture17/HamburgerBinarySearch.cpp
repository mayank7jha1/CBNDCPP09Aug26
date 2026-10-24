#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

int32_t main() {

  string recipe;
  cin >> recipe;
  int nb, ns, nc;
  cin >> nb >> ns >> nc;
  int pb, ps, pc;
  cin >> pb >> ps >> pc;
  int r;
  cin >> r;

  // Ek hamburger ko banane me kitne bread,sausage,cheese chahiye.
  int sb = 0, ss = 0, sc = 0;

  for (int i = 0; i < recipe.size(); i++) {
    if (recipe[i] == 'B') {
      sb++;
    } else if (recipe[i] == 'S') {
      ss++;
    } else {
      sc++;
    }
  }

  int s = 0, e = 1e12 + 100;
  int ans = 0;

  while (s <= e) {
    int mid = (s + e) / 2;
    // Check if You can make mid amount of hamburger or not?

    int EBM = (mid * sb - nb) * pb;
    if (EBM < 0) {
      EBM = 0;
    }

    int ESM = (mid * ss - ns) * ps;
    if (ESM < 0) {
      ESM = 0;
    }

    int ECM = (mid * sc - nc) * pc;
    if (ECM < 0) {
      ECM = 0;
    }

    int EM = EBM + ESM + ECM;

    if (EM <= r) {
      ans = mid;
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }

  cout << ans << endl;
}
