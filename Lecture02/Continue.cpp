#include<iostream>
using namespace std;


//Continue and Break : Repeat Statements with an exception of switch

int main() {

	int i = 1;

	while (i <= 10) {

		cout << i << endl;

		if (i == 5) {
			continue;
		}

		i++;
	}



}