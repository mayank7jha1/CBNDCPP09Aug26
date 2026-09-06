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

  // int mini = INT_MAX;

  // for (int i = 0; i < n; i++) {
  //   if (a[i] < mini) {
  //     mini = a[i];
  //   }
  // }

  // cout << mini << endl;

  // Finding Out the smallest element index.
  //  This variable stores the minimum element index.
  int mini02 = 0; // Initially 0th index par hi sabse chota element hain.
  // 0 se 0 tak ka sabse chota element is a[0].

  for (int i = 1; i < n; i++) {
    if (a[i] < a[mini02]) {
      mini02 = i;
    }
  }

  cout << mini02 << endl;
  cout << a[mini02] << endl;

  // I want to swap the the smallest element with the 0th index.
  // You want to swap a[mini02] with a[0].
  int temp = a[mini02];
  a[mini02] = a[0];
  a[0] = temp;

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
