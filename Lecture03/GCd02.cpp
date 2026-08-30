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

  while (b != 0) {
    int rem = a % b;

    a = b;
    b = rem;
  }

  cout << a << endl;

  return 0;
}
