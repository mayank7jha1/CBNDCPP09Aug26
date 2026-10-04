#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e5 + 1;
char ch[N];
int b[N]{};
int difference[N]{}; // THis is also 1 based.

int main() {

  cin >> ch; // THis is zero based.
  int n = strlen(ch);

  int days;
  cin >> days;

  for (int i = 1; i <= days; i++) {
    cin >> b[i]; // This is 1-based.
  }

  for (int i = 1; i <= days; i++) {
    difference[b[i]]++;
  }

//   for (int i = 1; i <= (n / 2); i++) {
//     difference[i] = difference[i - 1] + difference[i];
//     cout << difference[i] << " ";
//   }
// 
//   cout << endl;
  // cout << ch << endl;

  for (int i = 1; i <= (n / 2); i++) {
    if (difference[i] % 2 == 1) {
      int swapIndex = i - 1;
      swap(ch[swapIndex], ch[n - swapIndex - 1]);
    }
  }

  cout << ch << endl;

  return 0;
}
