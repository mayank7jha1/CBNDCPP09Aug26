#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // C++ : Character Ko represent karna hain to We use '' (Single Quotes)

  // int x;
  // int y{17};

  // Our Systems don't understand characters.
  // Characters ki ascii mapping hain and by default char is unsigned.
  // Internally aap char variable me hamesha ascii value hi store karte ho.
  // Kyuki char is of 1 byte : It can only store a single character at a time.

  // char ch; // 1 Byte
  // char ch3 = 'Z';
  // char ch1{65};
  // char ch2{'A'}; // Still internally ch2 has a value 65 stored.
  // cout << ch2 << endl;
  // cout << ch1 << endl;

  // char ch4;
  // cin >> ch4;
  // cout << ch4 << endl;

  int x;
  char ch{'0'};

  cin >> ch; // Internally it is storing 54 as ascii value for 0.
  cout << ch << endl;
  // cin >> x;

  // cout << ch << " " << x << endl;

  return 0;
}
