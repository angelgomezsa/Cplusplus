#include <iostream>
using namespace std;

struct Racional { 
	int num, den; 
};

int gcd (int a,int b) {
	if (a == 0) return b;
	return gcd (b%a, a);
}


Racional racional(int n, int d) {
	Racional a;
	if (n == 0) {
		a.num = 0;
		a.den = 1;
		return a;
	}
	int grcd = gcd(n,d);
	n/=grcd;
	d/=grcd;
	
	if (d < 0) {
		n = -n;
		d = -d;
	}
	a.num = n;
	a.den = d;
	return a;
}

	
int main() {
	
	int n,d;
	cin >> n >> d;

	Racional res = racional(n,d);
	cout << res.num << '/' << res.den << endl;
}