#include<iostream>
using namespace std;


int main() {

	// (Statement 01 ) ? (Statement 02) :(Statement 03)


	int x, y, z;
	cin >> x >> y >> z;

	int ans = (((x > y) and (x > z)) ? x : (((y > z) and (y > x)) ? y : z));
	cout << ans << endl;

}