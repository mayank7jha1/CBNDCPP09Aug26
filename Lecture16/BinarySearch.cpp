#include <algorithm>>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Upper Bound of (x) : First element that is greater than  x.
int UpperBound(int *a, int n, int x) {
  int ans = n; // To store the potential answer.
  int s = 0, e = n - 1;

  while (s <= e) {
    int mid = (s + e) / 2;

    if (a[mid] > x) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}

// Lower Bound of (x) : First element that is greater than or equal to x.
int LowerBound(int *a, int n, int x) {
  int ans = n; // To store the potential answer.
  int s = 0, e = n - 1;

  while (s <= e) {
    int mid = (s + e) / 2;

    if (a[mid] >= x) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}

// Binary Search to find the index of the element.
int BinarySearch(int *a, int n, int x) {
  int ans = n; // To store the potential answer.

  int s = 0, e = n - 1;

  while (s <= e) {

    int mid = (s + e) / 2;
    if (a[mid] == x) {
      ans = mid;
      return ans;
    } else if (a[mid] > x) {
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}

int main() {

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int x;
  cin >> x;

  cout << BinarySearch(a, n, x) << endl;
  cout << LowerBound(a, n, x) << endl;
  cout << UpperBound(a, n, x) << endl;

  cout << "Freq of x : " << UpperBound(a, n, x) - LowerBound(a, n, x) << endl;

  return 0;
}
