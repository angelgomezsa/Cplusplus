#include <iostream>
using namespace std;

void basem2(int n) {
	if (n == 0) return;
	int r = n%-2;
	n/=-2;
	if (r < 0) {
		n++;
		r+=2;
	}
	basem2(n);
	cout << r;
}

int main() {
	int n;
	while (cin >> n) {
		if (n == 0)	cout << n << ": " << n << endl;
		else {
			cout << n << ": ";
			basem2(n);
			cout << endl;
		}
	}
}