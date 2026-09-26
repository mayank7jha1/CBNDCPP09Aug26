#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int a[n]{};
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Idea: Find the maximum in the range and put that element to its correct
  // position.
  // Task i : Find the maximum in the range 0 to n-i-1 and put that element to
  // its correct position.
  // For the above task we are performing the comparison (n-i-1-1) times.

  for (int i = 0; i < n - 1; i++) {
    // Current Task is i :

    for (int j = 0; j < n - i - 1; j++) {

      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
