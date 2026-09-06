#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Array Definition:
  // Rule : It is compulsory to give its size.
  int a[5];
  cout << a[0] << endl; // If you have not given any value to the buckets of
                        // this array a : Initial value will be garbage.

  // Copy List Initialisation:
  // {} : Collection of elements
  int a1[5] = {2, 3, 1, 5, 7};

  // Direct List Initialisation: Fast and More Efficient
  int a2[5]{3, 2, 1, 3, 5};

  // Value Initialisation:
  //  When you want all the buckets of the container/DS to
  // be initialised with zero.

  int a3[5]{};
  cout << a3[2] << endl;

  // Definition:
  int a4[5]{3, 2, 1};
  cout << a4[4] << endl;

  int a5[5] = {0};

  // int a7[4][5] = {{0}};

  int a6[]{};

  // int a8[4][7]{};

  int a9[]{5, 4, 2, 4};
  
  int a10[5]{5, 4, 2, 4};

  return 0;
}
