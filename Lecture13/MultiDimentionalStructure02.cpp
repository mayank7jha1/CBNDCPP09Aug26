#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;

// Array of Arrays:

int main() {

  char a[][3]{
      {"Ma"},
      {"Na"},
      {"Ta"},
  };

  int n, m;
  cin >> n >> m;
  //   char ch[n][m];
  //
  //   for (int i = 0; i < n; i++) {
  //     // Current row: i
  //     for (int j = 0; j < m; j++) {
  //       cin >> ch[i][j]; // Character
  //     }
  //   }
  //
  //   for (int i = 0; i < n; i++) {
  //     cin >> ch[i]; // String ka input.
  //   }
  //
  //   for (int i = 0; i < n; i++) {
  //     cout << ch[i] << endl;
  //   }
  //
  //   // sort(ch, ch + m); // No meaning:
  //   sort(ch[1], ch[1] + m);

  // This is an array of type string.
  string s[5];

  // s[2] : Ek string :
  // s[2][3] : Ek Character ki baat horahi hain.
  //

  for (int i = 0; i < n; i++) {
    cin >> s[i]; // String ka input.
  }

  for (int i = 0; i < n; i++) {
    cout << s[i] << endl;
  }

  // This is allowed.
  sort(s, s + n);
  sort(s[1].begin(), s[1].end());

  for (int i = 0; i < n; i++) {
    cout << s[i] << endl;
  }

  return 0;
}
