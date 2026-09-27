#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;

int main() {

  cout << min(10, 40) << endl;
  cout << min(10, min(20, 30)) << endl;
  cout << min(10, min(20, min(30, 40))) << endl;

  // {} : Collection of elements.

  cout << max({10, 20, 30, 20, 10, 10, 2, 2, 5, 90}) << endl;
  cout << max({10, 20, 30, 20, 10, 10, 2, 2, 5, 90}) << endl;

  
  return 0;
}
