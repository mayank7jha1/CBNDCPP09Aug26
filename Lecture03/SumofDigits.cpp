#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Starting Point:
  int n;
  cin >> n;
  int ReverseNumber = 0;
  int SumofDigits = 0;

  // Stopping Point:
  while (n != 0) {

    int digit = n % 10;

    ReverseNumber = ReverseNumber * 10 + digit;
    SumofDigits += digit;

    // Next State: (Integer Division)
    n = n / 10;
  }

  cout << ReverseNumber << endl;
  cout << SumofDigits << endl;

  return 0;
}
