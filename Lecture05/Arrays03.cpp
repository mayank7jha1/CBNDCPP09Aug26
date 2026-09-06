#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 2e5; // 2*10^5

int main() {

  // C++ : Occupied and Unoccupied
  // Why Are pointer very powerful?
  // Delete : Pure deletion of a block can only be done by compilers.
  // Arrays that are created in static memory must have a fixed size.

  int a[5];

  int n;
  cin >> n;

  int a1[N]; // Why this is giving me a warning?

  int a3[4]{};
  // Compiler :Occupied:

  cout << a3 << endl;
  cout << a3 + 3 << endl;
  cout << a3 + 5 << endl;
  *(a3 + 5) = 90;
  cout << a3[5] << endl;

  cout << a3[5] << endl;

  return 0;
}
