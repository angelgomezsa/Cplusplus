#include <iostream>
using namespace std;

int nombre_digits(int n) {
	int digits = 1;
	while (n > 9) {
		n = n/10;
		digits++;
	}
	return digits;
}

int main () {
	
	int n;
	cin >> n;
	
	cout << nombre_digits(n) << endl;
}