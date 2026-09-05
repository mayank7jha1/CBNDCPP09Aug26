#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int c = 2;
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
      cout << c << " ";
    }

    c++;
  }

  return 0;
}
