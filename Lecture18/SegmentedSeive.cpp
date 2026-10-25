#include <climits>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define int long long

// Motivation : Finding Prime Numbers from 1 to N.
const int N = 1e5 + 3;
#define int long long

// This will store all the prime numbers in the range 1 to 10^5.
vector<int> Primes;
void PrimeSeive() {
  bool p[N + 1]{};
  memset(p, 1, sizeof(p));

  for (int i = 3; i * i <= N; i += 2) {
    if (p[i] == 1) {
      for (int j = i * i; j <= N; j += i) {
        p[j] = 0;
      }
    }
  }

  Primes.push_back(2);
  for (int i = 3; i <= N; i += 2) {
    if (p[i] == 1) {
      Primes.push_back(i);
    }
  }
}

void SegmentedSeive(int a, int b) {
  // cout << a << " " << b << endl;
  if (b < a) {
    cout << endl;
    return;
  }

  vector<int> SegmentedArray(b - a + 1, 1);

  // Mujhe Primes vale array se ek ek karke prime number uthana hain and
  //  is array ke ander jo jo current prime number hain uske multiple ko
  //  cross karna hain.

  // I am iterating over the Primes array:
  for (int i = 0; ((i < Primes.size()) and (Primes[i] * Primes[i] <= b)); i++) {
    // Current Prime Number : Primes[i]
    // I need to find the first multiple of this Primes[i] in the range [a,b].

    int start = ((a / Primes[i]) * Primes[i]);
    if (start < a) {
      start += Primes[i];
    }

    for (int j = start; j <= b; j += Primes[i]) {
      // Shifted Marking:
      SegmentedArray[j - a] = false;
    }
    // Aapne galti se starting point of the range ko hi not prime mark
    //  kardiya jabki vo prime tha.
    if (start == Primes[i]) {
      SegmentedArray[start - a] = true;
    }
  }

  // I am iterating over the segment array and printing all the primes of the
  //  current segment:
  for (int i = a; i <= b; i++) {
    if (SegmentedArray[i - a] == 1) {
      cout << i << endl;
    }
  }

  cout << endl;
}

int32_t main() {
  // Precomputations :
  PrimeSeive();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, m;
    cin >> n >> m;
    if (n < 2) {
      n = 2;
    }
    SegmentedSeive(n, m);
  }

  return 0;
}
