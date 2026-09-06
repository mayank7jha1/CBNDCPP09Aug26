#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Traversal:
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
