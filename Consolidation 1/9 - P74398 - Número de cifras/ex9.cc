#include <iostream>
using namespace std;

int main () {
	
	int n;
	cin >> n;
	
	for (int i=2;i<=16;i++) {
		int n_copy = n;
		int digits = 0;
		while (n_copy > 0) {
			n_copy = n_copy/i;
			digits++;
		}
		cout << "Base " << i << ": " << digits << " cifras." << endl;
	}
}