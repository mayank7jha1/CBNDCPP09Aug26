#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int Sum(int x, int y) {
  x++;
  cout << x << endl;
  int ans = x + y;
  return ans;
}

int Sum02(int *x, int *y) {
  (*x)++;
  return ((*x) + (*y));
}

int Sum03(int &a, int &b) {
    a=10;  
}

int main() {
  int x, y;
  cin >> x >> y;

  // int ans = Sum(x, y);
  // cout << ans << endl;

  int ans02 = Sum02(&x, &y);
  cout << x << endl;

  int ans03 = Sum03(x, y);

  return 0;
}
