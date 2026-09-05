#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int row = 1;
  while (row <= n) {

    // First : Print the spaces for the current row.
    int col = 1; // Starting Point

    // Stopping Point
    while (col < row) {
      // Task:
      cout << " ";

      // Next State:
      col++;
    }

    // For the current Row only print the stars for the rest
    //  of the columns.
    // cout << col << " ";

    // Stopping Point
    while (col <= n) {
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
