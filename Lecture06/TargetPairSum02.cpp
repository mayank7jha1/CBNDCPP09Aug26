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

  int target;
  cin >> target;

  // Index Dublicates are not allowed, and value dublicates are allowed.
  //  Idea: Go to every index of the array and treat the current element as the
  //   fe of the pair and then linear search for the second element in the
  //   entire array.

  // We are finding the element in range [0,n-2].
  for (int i = 0; i < (n - 1); i++) {
    int fe = a[i];
    int se = target - a[i];
    for (int j = i + 1; j < n; j++) {

      if (se == a[j]) {
        cout << fe << " " << se << endl;
      }
    }
  }

  return 0;
}
