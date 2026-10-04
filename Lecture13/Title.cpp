#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define endl "\n"

int main() {
  int k;
  cin >> k;
  char ch[101]{};
  cin >> ch;

  // int len = 0;
  // for (int i = 0; ch[i] != '\0'; i++) {
  //   len++;
  // }

  int n = strlen(ch);

  bool map[27]{};

  // Do the Obvious:
  int i = 0, j = n - 1;
  while (i < j) {

    if (ch[i] == '?' and ch[j] == '?') {
      i++;
      j--;
      continue;
    } else if (ch[i] == ch[j]) {
      char cc = ch[i]; // If you print cc : Ascii value of cc.
      int ss = cc - 'a';
      map[ss + 1] = true;
      i++;
      j--;
      continue;
    } else if (ch[i] == '?' and ch[j] != '?') {
      ch[i] = ch[j];
      map[ch[i] - 'a' + 1] = true;
      i++;
      j--;
    } else if (ch[j] == '?' and ch[i] != '?') {
      ch[j] = ch[i];
      map[ch[i] - 'a' + 1] = true;
      i++;
      j--;
    } else {
      cout << "IMPOSSIBLE" << endl;
      return 0;
    }
  }

  if (i == j) {
    if (ch[i] != '?') {
      map[ch[i] = 'a' + 1] = 1;
    }
  }

  // What do I know here:
  // 1. My answer is not IMPOSSIBLE.
  // 2. I now Know which character has already been used to make the current
  // string as palindrome.
  // 3. My i and j is at the middle or the innermost characters.

  // What do we need to do:
  // Fill the innermost Question marks with the maximum unused characters upto
  // k.

  
  while (i >= 0 and j <= n - 1) {

    // Find the maximum Unused character till k.
    // Use the help of map.
    while (k > 1 and map[k] == 1) {
      k--;
    }

    // Now I know which character I need to put.

    if (ch[i] == '?' and ch[j] == '?') {
      ch[i] = ch[j] = k + 'a' - 1;
      i--;
      j++;
      // Maine ye current value of k vala character use kar liya hain.
      map[k] = 1;
    } else {
      i--;
      j++;
    }
  }

  if (k == 1 and map[k] == 1) {
    cout << ch << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }

  return 0;
}
