#include <iostream>
#include <cmath>
using namespace std;

int base4(int n,int u) {
	if (n <= 3) return pow(10,u)*n;
	int b4 = base4(n/4,u+1);
	return b4+pow(10,u)*(n%4);
}

// void vbase4(int n) {
	// int b4=0,unit=0;
	// if (n <= 3) {
		// b4+= pow(10,unit)*n;
		// unit++;
	// }
	// else {
		// base4(n/4);
		// b4+= pow(10,unit)*(n%4);
		// unit++;
	// }
	// cout << b4;
// }

int main() {
	int n;
	cin >> n;
	cout << base4(n,0);
}