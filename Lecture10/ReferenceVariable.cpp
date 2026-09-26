#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int x{10};
  int *xptr = &x;

  // Reference Variable: Alias
  int &y = x;
  x++;
  cout << x << endl;
  cout << y << endl;

  return 0;
}
