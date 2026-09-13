#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

int32_t main() {

  int t;
  cin >> t;

  // You have to apply your algorithm t times.
  for (int i = 1; i <= t; i++) {

    int n; // Size of the given array for the current test case.
    cin >> n;

    int a[n]; // Current Array for the current test case.
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    // Step01: Find the last digit of every element of the array.

    // After this array a will contain only the last digit of the given numbers
    // for the given test case.
    for (int i = 0; i < n; i++) {
      a[i] %= 10;
    }

    // Step02: Find the freq of all the last digit in the given numbers.
    int freq[10]{};
    for (int i = 0; i < n; i++) {
      int ce = a[i];
      freq[ce]++;
    }

    for (int i = 0; i < 10; i++) {
      if (freq[i] > 3) {
        freq[i] = 3;
      }
    }

    // Step03: Build your new array of short size containing only the
    // contributing freq of the last digit of the number for the current test
    // case.

    int b[30]{};

    // This below variable tells you how many current elements are there inside
    // the b array.
    int k = 0; // This will be for interating over the b array.

    for (int i = 0; i < 10; i++) {
      int CurrentLastDigit = i;
      int FrequencyCurrentLastDigit = freq[i];

      // SubIdea: Insert this CurrentLastDigit , FrequencyCurrentLastDigit times
      // inside the b array.
      // Currenly I am at which index of the b array : That is represented by k.

      for (int j = 1; j <= FrequencyCurrentLastDigit; j++) {
        b[k] = CurrentLastDigit;
        k++;
      }
    }

    // What is the size of b array: k

    // Step05: Apply the triplet ka logic:
    int flag = 0;

    for (int i = 0; i < (k - 2); i++) {
      for (int j = i + 1; j < (k - 1); j++) {
        for (int m = j + 1; m < k; m++) {

          if ((b[i] + b[j] + b[m]) % 10 == 3) {
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
