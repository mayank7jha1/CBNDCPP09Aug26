#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

/*
 *  1. Using Function Overloading
 *  2. Default Arguments
 *  3. Function Templates
 *
 */

// int sum(int x, int y) { return x + y; }
// int sum(int x, int y, int z) { return x + y + z; }
// int sum(int x, int y, int z, int k) { return x + y + z + k; }
// double sum(int x, int y, double z) { return x + y + z; }

template <typename T1, typename T2, typename T3, typename T4, typename T5>
T5 sum(T1 x = 0.0, T2 y = 0.0, T3 z = 0.0, T4 a = 0.0) {
  // Just:
  return x + y + z + a;
}

int main() {
  // cout << sum(10) << endl;
  // cout << sum(5, 10) << endl;
  // cout << sum(5, 10, 15) << endl;
  // cout << sum(5, 10, 15, 20) << endl;

  cout << sum<int, double, int, int, double>(5, 10, 5, 20) << endl;
}
