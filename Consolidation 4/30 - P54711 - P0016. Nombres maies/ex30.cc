#include <iostream>
#include <cmath>
using namespace std;

void printmayan(int n) {
	if (n==0) return;
	if (n > 4) {
		printmayan(n-5);
		cout << string(5,'-') << endl;
	}
	if (n < 5) {
		cout << string(n,'.') << endl;
		return;
	}
}

void dtom(int n) {
	if (n==0) cout << "zero" << endl;
	else if (n >= 20) {
		dtom(n/20);
		if (n%20==0) cout << "zero" << endl;
	}
	printmayan(n%20);
}

int main() {
	int n;
	while (cin >> n) {
		cout << n << endl;
		dtom(n);
	}
}