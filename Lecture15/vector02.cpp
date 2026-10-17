#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> v;

  int a[10];
  vector<int> v1(10);

  int a1[3]{2, 3, 9};
  vector<int> v2{3, 5, 9};

  int a2[]{4, 5, 6, 7};

  // vector<int> v3(5){3, 1, 2, 3, 4};Not Allowed

  cout << a[3] << endl;
  //[] are overloaded for vector also.
  cout << v2[2] << endl;
}
