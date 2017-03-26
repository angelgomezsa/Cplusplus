#include <iostream>
using namespace std;

int main () {
	
	int n;
	cin >> n;
	
	int n_copy = n;
	int even = 0;
	int odd = 0;
	int digits = 1;
	//count n's digits
	while (n > 9) {
		n = n/10;
		digits++;
	}

	// count numbers in even and odd positions;
	for (int i=1;i<=digits;i++) {
		if (i%2 == 0) even = n_copy%10+even;
		else odd = n_copy%10+odd;
		n_copy = n_copy/10;
	}
	cout << odd << " " << even << endl;
	
	// factor que els relaciona
	if (odd < even) swap(odd,even);
	if (even == 0) cout << "0 = 0 * " << odd << endl;
		else if (odd%even == 0) cout << odd << " = " << odd/even << " * " << even << endl;
			else cout << "res" << endl;
}	
