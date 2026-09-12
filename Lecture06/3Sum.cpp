#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    // For the given test case solve the problem:
    // For every test case we are given this: size and array ke elements.
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    // Current Question : For the current array kya koi aisa triplet hain
    //  jiska sum ka last digit is 3.

    // Abhi tak mujhe triplet nahi mila hain for the current test case.
    int flag = 0;

    for (int i = 0; i < (n - 2); i++) {
      for (int j = i + 1; j < (n - 1); j++) {
        for (int k = j + 1; k < n; k++) {

          if ((a[i] + a[j] + a[k]) % 10 == 3) {
            flag = 1; // Now this represents that for the current test case we
                      // have a triplet.
            break;
          }
        }

        if (flag == 1) {
          break;
        }
      }
      if (flag == 1) {
        break;
      }
    }

    if (flag == 0) {
      // For the current Array there is no such triplet:
      cout << "NO" << endl;
    } else {
      // For the current array you have found the triplet:
      cout << "YES" << endl;
    }

    
  }

  return 0;
}
