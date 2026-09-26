#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int a[n]{};
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // For each loop can only be applied to a container and to all the elements of
  // the container.
  // You cannot update the elements of the container, you can just fetch them.

  // For every element of this container a that is going to be represented by a
  // variable x do the following task.

  // auto :

  for (int x : a) {
    x = x + 1;
    cout << x << " ";
  }
  
  cout << endl;
  
  for (auto x : a) {
    cout << x << " ";
  }

  return 0;
}
