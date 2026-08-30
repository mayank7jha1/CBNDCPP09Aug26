#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a < b) {
    int temp = a;
    a = b;
    b = temp;
  }

  // Starting Point
  int c = 1;

  int ans = 0;

  // Ending Point:
  while (c <= b) {

    if (((a % c) == 0) and ((b % c) == 0)) {
      // This c is a potential answer.
      ans = c;
    }

    c++;
  }

  cout << ans << endl;

  return 0;
}
