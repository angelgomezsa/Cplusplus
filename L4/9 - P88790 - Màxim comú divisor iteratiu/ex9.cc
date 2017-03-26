#include <iostream>
using namespace std;

int mcd(int a, int b) {
	while (b != 0) {
		int r = a%b;
		a = b;
	    b = r;
	}
	return a;
}

int main () {
	int a,b;
	cin >> a >> b;
	cout << mcd(a,b) << endl;
}