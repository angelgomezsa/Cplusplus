#include <iostream>
using namespace std;

int mcd4(int a, int b, int c, int d) {
	// mcd de a i b
	while (b != 0) {
		int r = a%b;
		a = b;
	    b = r;
	}
	
	// mcd de c i d
	while (d != 0) {
		int r = c%d;
		c = d;
	    d = r;
	}
	
	// mcd del primer i segon
	while (c != 0) {
		int r = a%c;
		a = c;
	    c = r;
	}
	return a;	
}

int main () {
	int a,b,c,d;
	cin >> a >> b >> c >> d;

	cout << mcd4(a,b,c,d) << endl;
}