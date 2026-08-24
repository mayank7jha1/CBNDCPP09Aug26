#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Variable Definition:
  int x;

  // Variable Definition and Initialisation:

  // Definition of a variable using Copy Assignment
  // Drawbacks :
  // 1. Slow (Hold)
  // 2. Narrowing of the data allowed hain.
  int y = 10;

  // Copy List Initialisation
  // Drawback:
  // 1. Slow because of copying.
  // Advantage:
  // 1. Uniform
  int z = {56};

  // int e[4] = {2, 1, 2, 3};

  // Direct List Initialisation:
  // 1. Very Fast
  // 2. Uniformity
  // 3. Narrowing of the data allowed nahi hoti.
  int p{10};
  // int e[4]{2, 3, 4, 5};

  // Zero Initialisation:
  int e{};

  int f(10);

  int q = 10.787;
  cout << q << "\n";
  int m{34.897979};
  cout << m;

  return 0;
}
