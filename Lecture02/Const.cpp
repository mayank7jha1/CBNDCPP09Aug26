#include<iostream>
using namespace std;
const int p = 670;




int main() {

	//This is a variable of int type.
	int x{100};
	x = 200;

	//Once you have defined a constant variable you cannot re-define it within the scope.
	const int p {100};
	// p = 200;//This is not Allowed.
	// cout << p << endl;

	if (true) {
		int p{300};//Yes this is allowed.

		p = 800;//This is allowed.
	}

	// p = 800;//NOt allowed.

	if (true) {
		const int p{600};
		cout << p << endl;
	}


}