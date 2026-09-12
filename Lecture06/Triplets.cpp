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

  int target;
  cin >> target;

  // Idea: We go to every element of the array and treat the current
  // element as the triplet ka first element and then for the current
  // fe we try to find the pair whose sum is target-fe.

  // for (int i = 0; i < (n - 2); i++) {
  //   int fe = a[i];

  //   // SubIdea: For the current fe try to find the pair whose sum is :
  //   // target-fe;
  //   // Go to the rest of the elements and treat them as the triplet ka
  //   // second or pair ka first element and then linear search for the
  //   // triplet ka third or pair ka second element.

  //   for (int j = i + 1; j < (n - 1); j++) {
  //     int se = a[j];

  //     // SubIdea: Try to find the triplet ka third element : Using Linear
  //     Search int key = target - fe - se;

  //     for (int k = j + 1; k < n; k++) {

  //       if (a[k] == key) {
  //         // I have found the triplet:
  //         cout << fe << " " << se << " " << a[k] << endl;
  //       }
  //     }
  //   }
  // }

  for (int i = 0; i < (n - 2); i++) {
    for (int j = i + 1; j < (n - 1); j++) {
      for (int k = j + 1; k < n; k++) {
        if (a[i] + a[j] + a[k] == target) {
          cout << a[i] << " " << a[j] << " " << a[k] << endl;
        }
      }
    }
  }

  return 0;
}
