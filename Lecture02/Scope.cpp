#include<iostream>
using namespace std;


int main() {

	//Variable Definition : Direct List Initialisation.
	int x{10};

	//Redefinition is not allowed.
	// int x{60};//Not Allowed.

	//Assignment :
	x = 60;//This is allowed.

	if (false) {
		int x{70};//This is allowed.

		cout << x << endl;
	}

	cout << x << endl;


}