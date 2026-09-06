#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int z = 10;
  int *zptr = &z;
  int **zzptr = &zptr;
  int ***zzzptr = &zzptr;

  cout << z << endl;
  cout << &z << endl;
  cout << zptr << endl;
  cout << &zptr << endl;
  cout << *(&z) << endl;
  // cout << &(*z) << endl;
  cout << *(&zptr) << endl;
  // cout << **zptr << endl;
  cout << &(*zptr) << endl;
  cout << zzptr << endl;
  cout << *zzptr << endl;
  cout << &(*zzptr) << endl;
  cout << (**zzptr) << endl;
  cout << &(*(&zzzptr)) << endl;
  cout << &(**zzzptr) << endl;
  cout << &zzptr << endl;
  cout << *(&zzptr) << endl;

  return 0;
}
