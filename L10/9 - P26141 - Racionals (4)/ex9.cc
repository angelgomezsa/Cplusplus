#include <iostream>
using namespace std;

struct Racional { 
	int num, den; 
};

int gcd (int a,int b) {
	if (a == 0) return b;
	return gcd (b%a, a);
}

void normalize(Racional& c) {
	int grcd = gcd(c.num,c.den);
	c.num/=grcd;
	c.den/=grcd;
	
	if (c.den < 0) {
		c.num = -c.num;
		c.den = -c.den;
	}
}

Racional suma(const Racional& a, const Racional& b) {
	Racional c;
	c.num = (a.num * b.den) + (a.den * b.num);
	c.den = a.den * b.den;
	if (c.num == 0) {
		c.num = 0;
		c.den = 1;
		return c;
	}
	normalize(c);
	return c;
} 

Racional resta(const Racional& a, const Racional& b) {
	Racional c;
	c.num = (a.num * b.den) - (a.den * b.num);
	c.den = a.den * b.den;
	if (c.num == 0) {
		c.num = 0;
		c.den = 1;
		return c;
	}
	normalize(c);
	return c;
}

Racional producte(const Racional& a, const Racional& b) {
	Racional c;
	c.num = a.num * b.num;
	c.den = a.den * b.den;
	if (c.num == 0) {
		c.num = 0;
		c.den = 1;
		return c;
	}
	normalize(c);
	return c;	
} 

Racional divisio(const Racional& a, const Racional& b) {
	Racional c;
	c.num = a.num * b.den;
	c.den = a.den * b.num;
	if (c.num == 0) {
		c.num = 0;
		c.den = 1;
		return c;
	}
	normalize(c);
	return c;	
}

int main() {
	
	Racional a;
	cin >> a.num;
	cin >> a.den;
	
	normalize(a);
	if (a.den != 1) cout << a.num << '/' << a.den << endl;
	else cout << a.num << endl;

	string op;
	int n,d;
	while (cin >> op >> n >> d) {
		Racional b;
		b.num = n;
		b.den = d;
		if (op == "suma") {
			Racional c = suma(a,b);
			if (c.den != 1) cout << c.num <<'/'<< c.den << endl;
			else cout << c.num << endl;
			a = c;
		}
		if (op == "resta") {
			Racional c = resta(a,b);
			if (c.den != 1) cout << c.num <<'/'<< c.den << endl;
			else cout << c.num << endl;
			a = c;
		}
		if (op == "multiplica") {
			Racional c = producte(a,b);
			if (c.den != 1) cout << c.num <<'/'<< c.den << endl;
			else cout << c.num << endl;
			a = c;
		}
		if (op == "divideix") { 
			Racional c = divisio(a,b);
			if (c.den != 1) cout << c.num <<'/'<< c.den << endl;
			else cout << c.num << endl;
			a = c;
		}
	}
}