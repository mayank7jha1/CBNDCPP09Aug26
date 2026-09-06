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

  // Idea : Find the smallest in the current range and put it
  // at its correct position and do this task n-1 times to
  // achieve a asc. order arrangement.

  // This outler loop represents the amount of times you need
  //  to find the smallest element int the range.
  for (int i = 0; i < n - 1; i++) {
    // You are currently talking about task i:
    // Find the Smallest element in range [i,n-1] and
    // swap that element with the starting of the range
    // element which is a[i].

    // Assume the first element to be the smallest of the
    //  range: a[i] ko sabse chota maano:

    int mini = i;
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[mini]) {
        mini = j;
      }
    }

    // Now I have the smallest element in the range of
    //  [i,n-1] and it is at the index mini and element is: a[mini].
    // swap a[mini] with a[i].

    int temp = a[i];
    a[i] = a[mini];
    a[mini] = temp;
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
