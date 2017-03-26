#include <iostream>
using namespace std;

int main () {
	
	int b;
	cin >> b;
	
	int n;
	while (cin >> n) {
		int sum = 0;
		int n2 = n;
		while (n > 0) {
			sum = n%b+sum;
			n = n/b;
		}
		cout << n2 << ": "<< sum << endl;
	}
}