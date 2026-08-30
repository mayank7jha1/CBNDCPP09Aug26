#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int x;
  int c = 1;

  int maxi = INT_MIN;
  int mini = INT_MAX;

  while (c <= n) {
    cin >> x;

    if (x > maxi) {
      maxi = x;
    }

    if (x < mini) {
      mini = x;
    }

    c++;
  }

  cout << maxi << " " << mini << endl;

  return 0;
}
