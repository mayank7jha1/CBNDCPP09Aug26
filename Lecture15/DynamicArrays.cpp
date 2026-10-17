#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int x{10};
  int *b = new int{20};

  cout << x << endl;
  cout << b << endl;
  cout << *b << endl;

  delete b;

  int a[3]{2, 4, 5};
  int *c = new int[4]{3, 2, 1, 5};

  cout << c << endl;        // Address of the base block.
  cout << c + 1 << endl;    // Address of the first block.
  cout << *(c + 1) << endl; // Value at the first block which is 2.
  //[ ] : Value of :
  cout << c[1] << endl; // Same as above.

  for (int i = 0; i < 4; i++) {
    cout << c[i] << " ";
  }

  delete[] c;
  c = new int[3]{3, 2, 9};

  // Solve(a);
  // Solve(c);

  return 0;
}
