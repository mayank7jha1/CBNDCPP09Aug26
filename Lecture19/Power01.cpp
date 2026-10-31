#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Recursion from Start and Iteration from back:
//  F(i) : I want to multiply x from i to y.
// Computations : No of States * Transition Time:  ~((y+1)*1)
int x, y;

int F(int m) {
  // Currently aap konse state par khade ho: F(m):
  // Stopping Point: Aisa konsa state hain jiska answer mujhe already pata hain:
  if (m == y) {
    // Konse state par khade ho: F(y+1) :
    // Mujhe ye state ka answer pata hain:
    // I just return saying I already know the answer for this state:
    return x;
  }

  // Current State : F(m);
  // int ans: Current State F(m) ka answer main ans variable me store karunga.

  // Ek bar kaam aap kariye and baaki recursion:
  int ans = x * F(m + 1);

  // Main yaha se kya return karu? Current State ka answer:
  return ans;
}

int main() {
  cin >> x >> y;

  // Starting Point:
  cout << F(1) << endl;

  cout << "---------------------" << endl;

  int ans = 1;
  for (int i = y; i >= 1; i--) {
    ans = ans * x;
  }
  cout << ans << endl;

  return 0;
}
