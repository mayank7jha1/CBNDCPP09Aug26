#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Starting Point:
  int n;
  cin >> n;
  int ReverseNumber = 0;

  // Stopping Point:
  while (n != 0) {
    int rem = n % 10;
    ReverseNumber = ReverseNumber * 10 + rem;

    // Next State:
    n = n / 10;
  }

  cout << ReverseNumber << endl;

  return 0;
}
