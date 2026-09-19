#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Maximum Size of an Array you can create in Global Scope me:
// Local Systems : ~10^6 (Even though your output is correct but it will not
// produce any output)
//  Online Judge (Codeforces/Atcoder/Leetcode)  : ~10^7 : ~ (4*10^7) bytes:
//  Multidimensional Arrays : int a[100]][100000]
//  One Single Array : (~10^7)/ 2 Arrays : 10^6 / 2 arrays or more (Max out 5
//  arrays): 10^5

// int a[1000001]{};

int main() {


    //For Local and Functional Block:
    // Local System : 10^5
    // Online Judge : 10^6

    int a[100000]{};

  for (int i = 0; i < 10000000; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
