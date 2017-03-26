#include <iostream>
using namespace std;

int main () {
	
	int n;
	cin >> n;
	int n_copy = n;
	int primera = 0;
	int segona = 0;
	// count n's digits
	int digits = 1;
	while (n > 9) {
		n = n/10;
		digits++;
	}
	
	if (digits%2 != 0) cout << "res" << endl;
	else {
		for (int i=0;i<digits;i++) {
			if (i < digits/2) segona = n_copy%10+segona;
			else primera = n_copy%10+primera;
			n_copy = n_copy/10;
		}
	if (primera == segona) cout << primera << " = " << segona << endl;
		else if (primera > segona) cout << primera << " > " << segona << endl;
			else cout << primera << " < " << segona << endl;
	}
}