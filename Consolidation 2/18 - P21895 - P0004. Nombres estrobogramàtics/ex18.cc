#include <iostream>
#include <cmath>
using namespace std;

int reves(int n) {
	int r = 0;
	while (n>0) {
		r = 10*r+n%10;
		n/=10;
	}
	return r;
}

bool es_estrobogramatic(int n) {
	int num = n;
	int inv=0,unit=0;
	while (n>0) {
		if (n%10 == 0 or n%10 == 1 or n%10 == 8) inv+= pow(10,unit)*(n%10); 
		else if (n%10 == 6) inv+= pow(10,unit)*9;
		else if (n%10 == 9) inv+= pow(10,unit)*6;
		else return false;
		n/=10;
		unit++;
	}
	if (inv == reves(num)) return true;
	else return false;
}

int main() {
	
	int n;
	int senar = 0;
	while (cin >> n) {
		if (es_estrobogramatic(n)) {
			cout << n << " si es estrobogramatic" << endl;
			if (n%2 != 0) senar++;
		}
		else cout << n << " no es estrobogramatic" << endl;
	}
	cout << endl;
	cout << "estrobogramatics senars: " << senar << endl;
}