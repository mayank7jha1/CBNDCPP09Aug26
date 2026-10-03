#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  char ch[100];
  cin >> ch;

  int freq[26]{};
  for (int i = 0; ch[i] != '\0'; i++) {
    //     char cc = ch[i];
    //     int index = cc;
    //     int shiftedindex = index - 97;
    //
    //     freq[shiftedindex]++;

    freq[ch[i] - 97]++;
  }

  return 0;
}
