#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Array of Arrays:

// int Solve(int *b) {}

const int m = 10;
const int n = 20;

int Solve(int m, int b[4][3]) { return 0; }

int main() {

  // This is an array a of size (4X6).
  int a[4][6];

  int a1[4][3]{
      {2, 1, 3},
      {3, 3, 4},
      {5, 6, 1},
      {1, 1, 1},
  };

  int a2[4][3]{
      {2, 1},
      {3, 3, 4},
      {5, 6},
      {1, 1, 1},
  };

  int a3[][3]{
      {2, 1},
      {3, 3, 4},
      {5, 6},
      {1, 1, 1},
  };

  // Initialise the entire structre with zero.
  // Value Initialisation
  int a4[2][3]{};
  int a5[2][3]{{}};
  int a6[4][3]{{0}};

  cout << a3 << endl;
  cout << a3 + 1 << endl;
  cout << (*a3) + 1 << endl; // 0th row and 1 column.
  cout << *(a3 + 1) << endl;
  cout << (*(a3 + 1) + 2) << endl;
  cout << *(*(a3 + 1) + 2) << endl;

  //[]:

  cout << a3[0] << endl;
  cout << &a3[0] << endl;
  cout << a3 << endl;
  cout << a3 + 0 << endl;

  cout << a3[1] + 2 << endl;
  cout << (*(a3 + 1) + 2) << endl;

  cout << *(*(a3 + 1) + 2) << endl;
  cout << a3[1][2] << endl;

  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    // Current row: i
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    // Current row: i
    for (int j = 0; j < m; j++) {
      cout << a[i][j] << " ";
    }

    cout << endl;
  }

  // Integer Array of Arrays me sorting ka koi concept nahi hain by default.
  // sort(a, a + n);

  // Pass By reference:
  //  Function :

  Solve(m, a3);

  return 0;
}
