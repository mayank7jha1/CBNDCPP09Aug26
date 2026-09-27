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

  // Sort the Array:
  for (int i = 1; i < n; i++) {
    int ce = a[i];
    int j = i - 1;
    while (j >= 0 and a[j] > ce) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = ce;
  }

  int i = 0, j = n - 1;
  
  int count = 0;

  while (i < j) {
    int pairSum = a[i] + a[j];
    if (pairSum == target) {
      count++;
      i++;
      j--;
    } else if (pairSum > target) {
      j--;
    } else {
      i++;
    }
  }

  cout << count << endl;

  return 0;
}
