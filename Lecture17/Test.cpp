#include <climits>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  cout << 132.2345667 << endl;
  cout << setprecision(6) << 132.234566789 << endl;
  cout << fixed << setprecision(6) << 132.234566789 << endl;

  return 0;
}
