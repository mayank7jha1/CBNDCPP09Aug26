#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int x;
  int maxi = INT_MIN;
  int mini = INT_MAX;

  while (cin >> x) {

    if (x > maxi) {
      maxi = x;
    }

    if (x < mini) {
      mini = x;
    }
  }

  cout << maxi << " " << mini << endl;

  return 0;
}
