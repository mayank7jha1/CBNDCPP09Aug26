#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Array Define: Below is an array with indentifier a also base address stored
  // in a with size 5.
  int a[5];

  // a is the base address of the array.
  cout << a + 0 << endl;
  cout << a + 1 << endl;
  cout << a + 2 << endl;

  // Index of a block : The amount of jump you need to take in order to reach at
  // this block.

  // Value can be assigned in the blocks of array using this:
  *a = 10;
  *(a + 1) = 20;
  *(a + 2) = 30;
  *(a + 3) = 40;
  *(a + 4) = 50;

  //[] : 1. Array ki definition me when you are giving the size of the array.
  //     2. Value of

  // If I want the value of the Bucket of the array :
  // *(a+2) = a[2] : Value of (a+2) bucket.

  cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4]
       << endl;

  for (int jump = 0; jump <= 4; jump++) {
    cout << a[jump] << " ";
  }

  return 0;
}
