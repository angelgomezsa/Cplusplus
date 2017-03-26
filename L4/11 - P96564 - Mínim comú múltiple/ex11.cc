#include <iostream>
using namespace std;

int mcd(int a,int b) {
	while (b != 0) {
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main () {
	
	int n;
	while (cin >> n) {
		if (n > 0) {
			int a,b,mcm;
			cin >> a;
			if (n == 1) cout << a << endl;
			else {
				for (int i=1;i<n;i++) {
					cin >> b;
					mcm = (a/mcd(a,b))*b;
					a = mcm;
				}
				cout << mcm << endl;
			}
		}
	}
}