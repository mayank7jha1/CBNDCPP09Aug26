#include <climits>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;
#define PI 3.1415926

double F(double x, double b, double c) {
  double ans = (((x * x) + (b * x) + c) / sin(x));
  return ans;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {

    double b, c;
    cin >> b >> c;

    double error = 1e-6;
    double ans = 1e18;
    double minix = 1e18;

    for (double x = error; x < PI / 2; x += error) {
      double cfv = F(x, b, c);
      if (ans > cfv) {
        ans = cfv;
        minix = x;
      }
    }


    cout << fixed << setprecision(10) << minix << endl;
    cout << fixed << setprecision(10) << ans << endl;
  }

  return 0;
}
