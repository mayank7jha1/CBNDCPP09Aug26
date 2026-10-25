#include <climits>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define int long long
const int N = 1e5 + 3;
#define int long long

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
  if (b < a) {
    cout << endl;
    return;
  }

  vector<int> SegmentedArray(b - a + 1, 1);

  for (int i = 0; ((i < Primes.size()) and (Primes[i] * Primes[i] <= b)); i++) {
    int start = ((a / Primes[i]) * Primes[i]);
    if (start < a) {
      start += Primes[i];
    }

    for (int j = start; j <= b; j += Primes[i]) {
      SegmentedArray[j - a] = false;
    }

    if (start == Primes[i]) {
      SegmentedArray[start - a] = true;
    }
  }

  for (int i = a; i <= b; i++) {
    if (SegmentedArray[i - a] == 1) {
      cout << i << endl;
    }
  }

  cout << endl;
}

int32_t main() {
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
