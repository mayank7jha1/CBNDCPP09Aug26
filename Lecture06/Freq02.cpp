#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  int maxi = INT_MIN;
  int mini = INT_MAX;
  for (int i = 0; i < n; i++) {
    cin >> a[i];

    if (a[i] > maxi) {
      maxi = a[i];
    }

    if (a[i] < mini) {
      mini = a[i];
    }
  }

  // Find the Maximum Element in the array:
  // for (int i = 0; i < n; i++) {
  //   if (a[i] > maxi) {
  //     maxi = a[i];
  //   }
  // }

  // Zero initialisation:
  int freq[maxi - mini + 1]{};

  // Go to every element of the original array and build your freq array.
  for (int i = 0; i < n; i++) {

    int os = a[i];
    // Relation : os-ss = mini
    int ss = os - mini;
    // We need to build the freq array on the shifted scale:

    freq[ss]++;
  }

  // Print the freq array:
  for (int i = 0; i < (maxi - mini + 1); i++) {
    // Current Index : i : Represents : Original array ka element in shifted
    // scale:
    //  And its freq is stored in freq[i]:
    // Original element nikalna hain from shifted scale:
    // Original element : i + mini
    if (freq[i] > 0) {
      cout << (i + mini) << " " << freq[i] << endl;
    }
  }

  return 0;
}
