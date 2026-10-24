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

double F1(double x, double b, double c) {
  double ans = ((2 * x + b) * sin(x) - cos(x) * (x * x + b * x + c));
  return ans;
}

double IsthisJeeBinarySearch(double b, double c) {

  double s = 0, e = (PI / 2);
  double ans = 0;
  int count = 0;

  while (s <= e) {

    double mid = (s + e) / 2;

    if (F1(mid, b, c) > 0) {
      ans = mid;
      e = mid;
    } else {
      ans = mid;
      s = mid;
    }

    count++;
    if (count > 100) {
      break;
    }
  }

  return ans;
}

double IsthisJeeTernarySearch(double b, double c) {

  double s = 0, e = (PI / 2);
  double ans = 0;

  while ((e - s) > 1e-6) {

    double m1 = s + (e - s) / 3;
    double m2 = e - (e - s) / 3;

    if (F(m1, b, c) > F(m2, b, c)) {
      ans = m2;
      s = m1;
    } else if (F(m1, b, c) < F(m2, b, c)) {
      ans = m1;
      e = m2;
    } else {
      ans = m1;
      s = m1;
      e = m2;
    }
  }

  return ans;
}

int main() {

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {

    double b, c;
    cin >> b >> c;

    double value1 = IsthisJeeBinarySearch(b, c);
    cout << fixed << setprecision(10) << F(value1, b, c) << endl;

    double value2 = IsthisJeeTernarySearch(b, c);
    cout << fixed << setprecision(10) << F(value2, b, c) << endl;
  }

  return 0;
}
