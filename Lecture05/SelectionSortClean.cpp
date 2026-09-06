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

  for (int i = 0; i < n - 1; i++) {

    int mini = i;
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[mini]) {
        mini = j;
      }
    }

    int temp = a[i];
    a[i] = a[mini];
    a[mini] = temp;
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
