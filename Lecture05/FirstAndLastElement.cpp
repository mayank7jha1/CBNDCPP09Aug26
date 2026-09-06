#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Motivation : First and Last Index of key.

int main() {

  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int key;
  cin >> key;

  // First Index:
  int FirstIndex = -1;
  for (int i = 0; i < n; i++) {
    // Current Index : i
    // Current Element : a[i]
    if (a[i] == key) {
      FirstIndex = i;
      break;
    }
  }

  cout << FirstIndex << endl;

  // Last Index:
  int LastIndex = -1;

  for (int i = 0; i < n; i++) {
    // Current Index : i
    // Current Element : a[i]
    if (a[i] == key) {
      LastIndex = i;
    }
  }

  cout << LastIndex << endl;

  int fi = -1, li = -1;

  for (int i = 0; i < n; i++) {
    // Current Index : i
    // Current Element  : a[i]

    if (a[i] == key) {
        
      if (fi == -1) {
        fi = i;
        li = i;
      } else {
        li = i;
      }
    }
  }

  return 0;
}

// Current  Idea :

/*
 *  Main Array ke har ek index par jaana chahta hu? Because mujhe
 *  first and last index of the key in entire array dhundna hain.
 *  Main ek ek karke har index par gaya and jis index par abhi khada hu
 *  usko compare kar raha hu with key, agar key ke barabar ye index ka
 *  element hain then main ye sochta hu ki ye pehli bar horaha hain ki
 *  isse pehle bhi hua hain:
 *  Agr aapko ye matching of the current element with  the key first time
 *  mil rahi hain toh aapko aapka first index mil gaya ab main is variable
 *  first index ko is update ke baad kabhi nahi chedunga.
 *  Now for my lastindex kyuki abhi aapka jo element key se match hua hain
 * ye bhi last index hosakta hain so main is element ka index bhi last index
 * me store karunga and then aage proceed karunga ki koi aur aage aisa index
 * mil raha hain jisse same key jaisa element ho, agar aisa hain to tohmain
 * last index ko update kardunga.
 */
