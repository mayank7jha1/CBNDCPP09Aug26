/*
        A person wants to go from origin to a
        particular location, he can move in only
        4 directions(i.e. East, West, North, South)
        but his friend gave him a long route, help a
        person to find minimum Moves so that he can
        reach to the destination.

        Input  1 – NESNWES
        Output 1 – E

        You need to print the lexicographically(dic order)
        sorted string. Assume the string will have only
        ‘E’ ‘N’ ‘S’ ‘W’ characters.


        Input  2 – SSSNEEEW
        Output 2 – EESS
*/

#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int x{}, y{};
  char ch;

  while (cin >> ch) {
    if (ch == 'N') {
      y++;
    } else if (ch == 'S') {
      y--;
    } else if (ch == 'E') {
      x++;
    } else {
      x--;
    }
  }

  cout << x << " " << y << endl;

  if (x > 0) {
    // Mere answer me east hain.

    // Mujhe x times E ko print karvana hain.
    int c = 1;
    while (c <= x) {
      cout << "E";
      c++;
    }

    // Mujhe north ya south ko print karvana hain.
    if (y > 0) {
      // Mujhe y times N ko print karvana hain.
      int c = 1;
      while (c <= y) {
        cout << "N";
        c++;
      }

    } else {

      // Mujhe y times South ko print kavana hain.
      // y<0
      y = y * (-1);
      int c = 1;
      while (c <= y) {
        cout << "S";
        c++;
      }
    }

  } else {
    // x<0
    // Mere answer me west hain.

    // Mujhe north ya south ko print karvana hain.
    if (y > 0) {
      // Mujhe y times N ko print karvana hain.
      int c = 1;
      while (c <= y) {
        cout << "N";
        c++;
      }

    } else {

      // Mujhe y times South ko print kavana hain.
      // y<0
      y = y * (-1);
      int c = 1;
      while (c <= y) {
        cout << "S";
        c++;
      }
    }

    // Mujhe x times E ko print karvana hain.
    x = x * (-1);
    int c = 1;
    while (c <= x) {
      cout << "W";
      c++;
    }
  }

  return 0;
}
