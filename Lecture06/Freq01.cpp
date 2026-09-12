#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] > maxi) {
      maxi = a[i];
    }
  }

  // Find the Maximum Element in the array:
  // for (int i = 0; i < n; i++) {
  //   if (a[i] > maxi) {
  //     maxi = a[i];
  //   }
  // }

  // Zero initialisation:
  int freq[maxi + 1]{};

  // Go to every element of the original array and build your freq array.
  for (int i = 0; i < n; i++) {
    int ce = a[i];
    freq[ce]++;
  }

  // Print the freq array:
  for (int i = 0; i < maxi + 1; i++) {
    // Current Index : i : Represents : Original array ka element:
    // And its freq is stored in freq[i]:

    if (freq[i] > 0) {
      cout << i << " " << freq[i] << endl;
    }
  }



  

  return 0;
}
