#include <iostream>
using namespace std;

int main () {
	
	int b,n;
	int x = 0;
	while (cin >> b >> n) {
		while (n > 0) {
			n = n/b;
			x++;
		}
		cout << x << endl;
		x = 0;
	}
}
