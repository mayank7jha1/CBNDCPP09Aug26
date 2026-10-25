#include <climits>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
#define int long long

// Motivation : Finding Prime Numbers from 1 to N.
const int N = 1e5 + 3;
#define int long long
bool Prime[N];

void PrimeSeive(int n) {
  // You have assumed all the numbers are prime.
  memset(Prime, 1, sizeof(Prime));
  Prime[0] = 0;
  Prime[1] = 0;

  // Also I am skipping all the even numbers.

  // I will now start filling/ marking my seive:
  for (int i = 3; i * i <= n; i += 2) {
    if (Prime[i] == 1) {
      // Mark multiples of this number as false.
      for (int j = i * i; j <= n; j += i) {
        Prime[j] = 0;
      }
    }
  }
}

void Print_Prime(int n, int m) {

  if (n <= 2 and m >= 2) {
    cout << 2 << " ";
  }

  if (n < 3) {
    n = 3;
  }

  if (n % 2 == 0) {
    n++;
  }

  for (int i = n; i <= m and i < N; i += 2) {
    if (Prime[i] == 1) {
      cout << i << " ";
    }
  }

  cout << endl << endl;
}

int32_t main() {
  // Precomputations :
  PrimeSeive(N - 1); // Before applying any logic of main program you now have
                     // all the prime numbers from 1 to N-1.

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, m;
    cin >> n >> m;
    Print_Prime(n, m);
  }

  return 0;
}
