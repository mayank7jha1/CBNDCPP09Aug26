#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char ch;

  char pc = '2'; // Iska meaning abhi koi prev character nahi hain.
  int C0 = 0, C1 = 0;

  while (cin >> ch) {

    if (ch == '1') {

      if (pc == ch or pc == '2') {
        C1++;
        if (C1 == 7) {
          cout << "Yes" << endl;
          return 0;
        }

      } else {
        C0 = 0;
      }

    } else {

      if (pc == ch or pc == '2') {
        C0++;
        if (C0 == 7) {
          cout << "Yes" << endl;
          return 0;
        }

      } else {
        C1 = 0;
      }
    }

    pc = ch;
  }

  cout << "No" << endl;

  return 0;
}
