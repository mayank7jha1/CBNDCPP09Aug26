#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int key;
  cin >> key;

  // Idea : Go to every bucket of the array and check each element with key.
  int ans = -1; // Index cannot be -ve.

  for (int i = 0; i < n; i++) {
    // Current Bucket: a[i] : *(a+i) : Base Address a:
    if (a[i] == key) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
