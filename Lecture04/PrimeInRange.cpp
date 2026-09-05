#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Motivation : Print all the prime numbers in range 2 to n.
// Idea : Go to every number from 2 to n and check if the current number is
// prime or not.

int main() {

  int n;
  cin >> n;

  // Go to every number from 2 to n.
  int c = 2;
  while (c <= n) {

    // Subtask : For the current number c : Check if c is prime or not.
    // Idea: How do we check if c is prime or not?
    // I go to every number from 2 to root(c) and check if there is any number
    // that divides c or not.
    // If not then c is a prime number and if yes then c is not a prime number.

    int p = 2;

    int flag = 0; // If flag is zero then that means till now we are assuming
                  // that the current number is prime.

    while ((p * p) <= c) {

      // Check if this value of p divides the current number c or not.
      // if it divides c then c is not a prime number if it doesn't : go to next
      // value of p and check again till the above while condition fails.

      if ((c % p) == 0) {
        // This c is not a prime number.
        flag = 1; // Because Our assumption was wrong and this c is not a prime
                  // number.
        break;
      }

      p++; // If the current value of p doesn't divide c then move to then next
           // value of p.
    }

    // When I am here I need to know if i have reached here from line number 30
    // failure or from the break statement for that we are taking a new flag
    // variable.

    if (flag == 0) {
      // The current number is prime print it.
      cout << c << " ";
    }

    c++;
  }

  return 0;
}
