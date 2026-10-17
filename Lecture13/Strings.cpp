#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;

// This m is local to this function Solve that means all the changes made in m
// will not reflect anywhere or as soon as you move out of this function Solve
// this variable is no longer in memory.
void Solve(string &m) {
  m = "Atul";
  cout << m << endl;
}

int main() {

  // x ke pass vo saari properties hongi jo integer ki hain.
  int x;

  // s ke pass vo saari properties hongi jo string ki hain.
  string s;

  char ch[]{"Mayank"};
  string s1{"Samyak"};

  // Character Array:
  cout << strlen(ch) << endl;
  cout << s1[2] << endl;

  cout << s1.length() << endl;
  cout << s1.back() << endl;
  cout << s1.front() << endl;

  cout << s1[0] << endl;
  cout << s1[s1.length() - 1] << endl;

  // Definition ke time append nahi kar sakte.
  // Rule: Not Sure : About Internal Working:
  // string s2 = "Mayank" + "Rahul";

  string s2 = s1 + "Rahul";
  cout << s2 << endl;
  s2.push_back('Q');
  cout << s2 << endl;
  s2.pop_back();
  cout << s2 << endl;

  // Properties hoti of the Containers ki bhi:

  Solve(s2);

  cout << s2 << endl;
  string s3 = s2;
  // Container : Comparison : element by element

  // You cannot fetch the address of the containers directly.
  // Lexo : Dic.
  sort(s2.begin(), s2.end());
  reverse(s2.begin(), s2.end());

  return 0;
}
