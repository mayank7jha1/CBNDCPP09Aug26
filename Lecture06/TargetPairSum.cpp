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

  // All forms of dublicates are allowed.
  //  Idea: Go to every index of the array and treat the current element as the
  //   fe of the pair and then linear search for the second element in the
  //   entire array.

  for (int i = 0; i < n; i++) {
    int fe = a[i];
    int se = target - a[i];
    for (int j = 0; j < n; j++) {

      if (i != j and se == a[j]) {
        cout << fe << " " << se << endl;
      }
    }
  }

  return 0;
}
