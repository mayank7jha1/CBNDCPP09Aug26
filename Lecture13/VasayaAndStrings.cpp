#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e5 + 3;
int n, k;
char ch[N];

int Solve(char ud) {

  int sp = 0, ep = 0;
  int count = 0; // Current Window me kitni bar ud character aaya hain.
  int ans = 0;   // Uptill now what is the maximum length of the substring me
                 // undesired character upto k times aaya hain.

  // Computations : 2*n
  for (; ep < n; ep++) {

    // Task While Expansion:
    if (ch[ep] == ud) {
      count++;
    }

    // Shrink Till you reach a desired window again:
    while (sp <= ep and count > k) {

      if (ch[sp] == ud) {
        count--;
      }

      sp++;
    }

    // Update:
    ans = max(ans, ep - sp + 1);
  }

  return ans;
}

int main() {
  cin >> n >> k;
  cin >> ch;

  // Change01 : a->b: UndesiredCharacter = a
  char UndesiredCharacter = 'a';
  int Op1 = Solve(UndesiredCharacter);

  // Change02 : b->a: UndesiredCharacter = b
  UndesiredCharacter = 'b';
  int Op2 = Solve(UndesiredCharacter);

  cout << max(Op1, Op2) << endl;

  return 0;
}
