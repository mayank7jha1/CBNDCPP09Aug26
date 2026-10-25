#include <cinttypes>
#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &v, int target) {
  int s = 0, e = v.size() - 1;
  bool ans = false;

  while (s <= e) {
    int mid = (s + e) / 2;

    // Since we are searching the element there is no such thing as potential
    // answer we will either find the element or not find the element and if
    //  we have found the element then just break and return the index.
    if (v[mid] == target) {
      ans = true;
      break;
    }

    if (v[mid] == v[s] and v[mid] == v[e]) {
      // I cannot Decide which region is sorted:
      s++;
      e--;
      continue;
    }

    if (v[s] <= v[mid]) {
      // Left region is sorted.

      if (v[s] <= target and target < v[mid]) {
        // Mera target is in left half:
        e = mid - 1;
      } else {
        // Mera target is in right half:
        s = mid + 1;
      }

    } else {
      // Right region is sorted.
      if (v[mid] < target and target <= v[e]) {
        // Element is in right sorted half:
        s = mid + 1;
      } else {
        // Element is in left half(Not sorted)
        e = mid - 1;
      }
    }
  }

  return ans;
}

int main() {
  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int target;
  cin >> target;

  cout << search(v, target) << endl;

  return 0;
}
