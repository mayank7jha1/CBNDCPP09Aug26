#include<iostream>
using namespace std;

//This is a Global Variable
int x{901};

int main() {

	int x{100};
	cout << x << endl;
	cout <<::x << endl;//This works for global

	if (true) {
		x++;
		cout << x << endl;
		int x{700};
		x++;

		if (true) {
			cout << x << endl;
			x++;
		}
		cout << x << endl;
		if (true) {
			x++;
			int x{900};
			cout << y << endl;
			x++;
		}

		cout << x << endl;
		x++;
	}

	cout << x << endl;

}