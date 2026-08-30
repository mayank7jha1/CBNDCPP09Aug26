#include<iostream>
using namespace std;


int main() {

	int a[3] {3, 2, 1};
	int x{300};
	a[100] = 10;
	*(a + 100) = 100;
	x = 97;
	cout << a[100] << endl;

}