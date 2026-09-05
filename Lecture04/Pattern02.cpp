#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  // Idea: Go to every row and then print a certain number of stars.
  int row = 1;
  while (row <= n) {

    // Subtask: For the current value of row,print * row number of times.
    int col = 1;

    while (col < row) {
      cout << "*";
      col++;
    }

    cout << endl;
    row++;
  }

  return 0;
}
