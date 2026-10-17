#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

// This ans is local to this function solve and is passed by value from main
void Solve(vector<int> ans) {
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  ans[2] = 100;
  cout << endl << "---------------------------" << endl;
  return;
}

void Solve01(vector<int> &ans) {

  // for every element of this container ans that is going to be represented as
  // a variable x do the following task:
  for (int x : ans) {
    cout << x << " ";
  }

  cout << endl << "---------------------------" << endl;
  return;
}

void Solve02(vector<int> &ans) {

  // cout << ans.begin(); // Address of the first block of this container ans.
  cout << *ans.begin();

  string s{"Samyak"};
  string::iterator it1 = s.begin();

  // Be very careful while using arithmetic operators on iterators.
  // In general saare saare arithmetic operators use nahi kar paoge containers
  // par.

  vector<int>::iterator it = ans.begin();
  // What is "it" : Address of the first block of ans of vector<int> type.
  // What is it+1 : Address of the second block of vector<int>type.
  // it++
  // it+=1 //Sequence container

  for (auto it = ans.begin(); it != ans.end(); it++) {
    cout << (*it) << " ";
  }

  cout << endl << "---------------------------" << endl;
  return;
}

vector<int> Solve04(vector<int> &v) {

  vector<int> t;
  return t;

  return {2, 3, 4, 5};
}

int main() {

  vector<int> v{4, 3, 2, 1, 6};
  Solve(v); // Vector will be passed by value;

  // Important: Iterating over a container using a iterator;
  Solve01(v);

  // Using the help of direct iterators:
  Solve(v);

  vector<int> g = v;
  vector<int> p = Solve04(v);

  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());

  return 0;
}
