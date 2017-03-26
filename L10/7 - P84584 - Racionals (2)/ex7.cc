#include <iostream>
using namespace std;

struct Racional {
	int num, den;
};

int gcd (int a,int b) {
	if (a == 0) return b;
	return gcd (b%a, a);
}

void normalize(Racional& r) {
    int grcd = gcd(r.num,r.den);
    r.num/=grcd;
    r.den/=grcd;
    if (r.den < 0) {
      r.num = -r.num;
      r.den = -r.den;
    }
}

void llegeix_racional(Racional& r, bool& final) {
	final=false;
	if (not (cin >> r.num)) final = true;
	if (not (cin >> r.den)) final = true;
	normalize(r);
}

void escriu_racional(const Racional& r) {
	if (r.den != 1) cout << r.num<<'/'<<r.den;
	else cout << r.num;
}

int main() {

	bool final;
	Racional r;
	llegeix_racional(r,final);
	normalize(r);
	escriu_racional(r);
	cout << endl;
}