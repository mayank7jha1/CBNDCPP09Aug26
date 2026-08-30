#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;//Check if this number n is prime of not.

	//Starting Point:
	int c = 2;

	bool flag = 0;

	//Stopping Point:
	while (c <= n - 1) {

		//Task:
		if ((n % c) == 0) {
			flag = 1;
			// return 0;
			break;
		}

		//Next State:
		c++;
	}


	//What all are the ways jisme main line 27 par aaunga?
	// 1. When the condition of while fails. (Meaning c>n-1)
	// 2. You encounter a break statement at line 20.

	//If you are at line 31 do you know from which way you have reached here?
	// cout << "Prime" << endl;


	// if (flag == 0) {
	// 	cout << "Prime" << endl;
	// } else {
	// 	cout << "Not Prime" << endl;
	// }

	if (c == n) {
		cout << "Prime" << endl;
	} else {
		cout << "Not Prime" << endl;
	}

}