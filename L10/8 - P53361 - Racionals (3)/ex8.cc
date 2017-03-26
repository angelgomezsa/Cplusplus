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

void suma_un(Racional& r) {
	r.num = (r.den) + (r.num);
	normalize(r);
}


int main() {
	
	Racional a;
	cin >> a.num;
	cin >> a.den;
	
	Racional b;
	cin >> b.num;
	cin >> b.den;
	
	cout << "Suma de fraccions: ";
	Racional c = suma(a,b);
	cout << c.num << '/' << c.den << endl;
	
	cout << "Resta de fraccions: ";
	c = resta(a,b);
	cout << c.num << '/' << c.den << endl;
	
	cout << "Producte de fraccions: ";
	c = producte(a,b);
	cout << c.num << '/' << c.den << endl;

	cout << "Divisio de fraccions: ";
	c = divisio(a,b);
	cout << c.num << '/' << c.den << endl;
	
}