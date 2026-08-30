#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n; // Check if this number n is prime of not.

  // Starting Point:
  int c = 2;

  bool flag = 0;

  // Stopping Point:
  while ((c * c) <= n) {

    // Task:
    if ((n % c) == 0) {
      flag = 1;
      // return 0;
      break;
    }

    // Next State:
    c++;
  }

  if (flag) {
    cout << "Not Prime" << endl;
  } else {
    cout << "Prime" << endl;
  }
}
