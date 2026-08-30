#include<iostream>
using namespace std;
#define endl "\n"

int main() {

	ios_base::sync_with_stdio(0);

	int x, y, z;
	cin >> x >> y >> z;

	printf("%d\n%d\n%d\n", x, y, z);

	cout << endl << "------------------" << endl;

	if ((x > y) and (x > z)) {
		cout << x << endl;
	} else if ((y > x) and (y > z)) {
		cout << y << endl;
	} else {
		cout << z << endl;
	}

	cout << endl << "------------------" << endl;


	if ((x > y) and (x > z)) {
		cout << x << endl;
	}


	if ((y > x) and (y > z)) {
		cout << y << endl;
	}


	if ((z > x) and  (z > y)) {
		cout << z << endl;
	}




}