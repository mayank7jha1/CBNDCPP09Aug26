#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Maximum books you are able to read across all the starting point till now.
  int ans = INT_MIN;

  for (int sp = 0; sp < n; sp++) {
    // Current Starting Point : sp:
    // From this starting point find out how many books you can read?
    int count = 0; // From this sp aap kitni books padh chuke ho.

    int tc = 0; // Aapne jo books from this sp padhi hain usme kitna time
    // consume karliya hain abtak.

    for (int ep = sp; ep < n; ep++) {
      // Aap ep index vali book ko padh rahe ho.
      tc += a[ep];
      if (tc > t) {
        break;
      }

      count++;
    }

    // Mujhe current sp se kitni books padh sakta hu mil chuka hain.
    // Vo maine count me store kiya hain.
    ans = max(ans, count);
  }

  cout << ans << endl;

  return 0;
}
