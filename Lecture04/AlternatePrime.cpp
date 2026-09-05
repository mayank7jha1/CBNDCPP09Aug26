#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int c = 2;

  // This will tell me how many prime numbers we have found till now.
  int count = 0;

  while (c <= n) {

    int p = 2;
    int flag = 0;

    while ((p * p) <= c) {

      if ((c % p) == 0) {
        flag = 1;
        break;
      }

      p++;
    }

    if (flag == 0) {
      // This c is a prime number:
      count++;

      // Check if this count is odd or not?
      if ((count % 2) == 1) {
        // Then print the current prime number.
        cout << c << " ";
      }
      
    }

    c++;
  }

  return 0;
}
