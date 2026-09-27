#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int serejaScore = 0;
  int dimaScore = 0;

  // Main Logic:
  int serejaTurn = 1;
  // i : Points to the first card
  //  j : Points to the last card
  int i = 0, j = n - 1;

  while (i <= j) {

    if (serejaTurn) {

      if (a[i] > a[j]) {
        serejaScore += a[i];
        i++;
      } else {
        serejaScore += a[j];
        j--;
      }

      serejaTurn = 0;

    } else {
      if (a[i] > a[j]) {
        dimaScore += a[i];
        i++;
      } else {
        dimaScore += a[j];
        j--;
      }

      serejaTurn = 1;
    }
  }

  cout << serejaScore << " " << dimaScore << endl;

  return 0;
}
