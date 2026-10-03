#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char ch[100];
  // cin >> ch;
  cin.getline(ch, 100);

  int freq[256]{};
  for (int i = 0; ch[i] != '\0'; i++) {
    char cc = ch[i];
    // Type Casting :
    int index = cc;
    freq[index]++;
  }

  for (int i = 0; i < 256; i++) {
    if (freq[i] > 0) {
      // i : Ascii Value of the current char in integer format
      cout << (char)i << " " << freq[i] << endl;
    }
  }


  

  return 0;
}
