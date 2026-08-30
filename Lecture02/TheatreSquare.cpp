#include<iostream>
using namespace std;


int main() {

	int n, m, a;
	cin >> n >> m >> a;


	int cm = (m + a - 1) / a;
	int cn = (n + a - 1) / a;

	cout << cm*cn << endl;

}