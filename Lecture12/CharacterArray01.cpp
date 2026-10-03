#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  // Any array made in static memory will always have a size.
  // int a[10];   // Collection of integer elements.
  // char ch[10]; // Collection of char elements Which is also known as string.

  // Subarray ----------> Substring
  //
  //   int a1[10]{1, 2, 3, 4, 4, 5};
  //   char ch1[10]{'A', 'b', '9', '4', '7'};
  //   int a2[]{2, 3, 4, 1, 34};
  //   int ch2[]{'a', 'A', '4'};
  //   cout << ch2[2] << endl;

  //   int n;
  //   cin >> n;
  //   char ch[100];
  //   for (int i = 0; i < n; i++) {
  //     cin >> ch[i];
  //   }
  //
  //   for (int i = 0; i < n; i++) {
  //     cout << ch[i];
  //   }

  //   char ch[100];
  //   int k = 0; // Index at which I need to insert the current character given
  //   to
  //              // us by the user.
  //   char x;
  //   while (cin >> x) {
  //     ch[k] = x;
  //     k++;
  //   }
  //
  //   for (int i = 0; i < k; i++) {
  //     cout << ch[i];
  //   }

  // >> and << : Both these operators are overloaded.

  // char ch[100];
  // cin >> ch;
  // for (int i = 0; i < 6; i++) {
  //   cout << ch[i];
  // }
  // cout << endl;
  // cout << ch;

  //   int x;
  //   cin >> x;
  //   cout << x << " ";
  //
  //   char ch[100];
  //   cin >> ch;
  //
  //   cout << ch << " ";
  //   char ch1[100];
  //   cin >> ch1;
  //
  //   cout << ch1 << endl;

  // char ch3[]{'M', 'a', 'y', 'a', 'n', 'k', '\0'};
  // char ch4[]{"Mayank"};
  // // Explicit Type Casting:
  // cout << (void *)ch3 << endl;
  // cout << &ch3 << endl;
  // cout << ch4 << endl;

  char ch[100];
  cin.getline(ch, 100, EOF);
  cin.getline(ch, 50, '.');
  cin.getline(ch, 80, '\n');
  cin.getline(ch, 40);
  cout << ch;

  return 0;
}
