#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int c = 1;
  char ch;

  while (c <= n) {
    cin >> ch;
    cout << ch << " ";

    c++;
  }

  return 0;
}
