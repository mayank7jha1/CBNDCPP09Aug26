#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int row = 1;
  while (row <= n) {

    // Print the * for the current row.
    int col = 1; // Starting Point

    // Stopping Point
    while (col + row <= n + 1) {
      // Task:
      cout << "*";

      // Next State:
      col++;
    }

    cout << endl;
    row++;
  }

  return 0;
}
