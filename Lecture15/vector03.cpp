#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

// Vector ka size jab full hain tab vector double nahi hota vector double
//  apna size sirf and sirf pushback function ke karan karta hain.
// and tab karta hain jab size full ke baad ek extra element aaya hain.

int main() {
  vector<int> v(5); // This is a vector v of size 1.
  // Property : Vectors start with size 1 and it doubles its size when full.
  //
  vector<int> v1(10); // This is a vector v1 of size 10.

  vector<int> v2(5, 4); // This is a vector v2 of size 5 whose all the blocks
  // are initialised with value 4.
  // Sequence Container : push_back, pop_back, empty, size,front,back,etc

  int n;
  cin >> n;

  // v.push_back(4);
  // v.push_back(3);
  // v.push_back(2);
  // v.push_back(1);
  // v.push_back(9);

  for (int i = 0; i < n; i++) {
    // int x;
    // cin >> x;
    // v.push_back(x);

    cin >> v[i];
  }

  v.push_back(100);
  v.pop_back();

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }

  cout << v.back() << endl;
  cout << v.front() << endl;
  cout << v[0] << endl;
  cout << v[v.size() - 1] << endl;

  // Container ke case me  : functions ko fetch karna chahte ho:
  // . dot operator;

  // cout << s.length() << endl;
  // strlen(ch)

  string s{"Mayank"};
  cout << s.size() << endl;
  cout << v.size() << endl;

  // Function me pass karsakte ho and function se return karva sakte ho.

  return 0;
}
