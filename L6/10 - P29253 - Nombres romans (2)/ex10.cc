#include <iostream>
using namespace std;

int main () {

	char c;
	while (cin >> c) {
		int prev=1000;
		int decimal=0;
		if (c == 'M') {
			decimal+=1000;
			prev=1000;
		}
		if (c == 'D') {
			decimal+=500;
			prev = 500;
		}
		if (c == 'C') {
			decimal+=100;
			prev = 100;
		}
		if (c == 'L') {
			decimal+=50;
			prev = 50;
		}
		if (c == 'X') {
			decimal+=10;
			prev = 10;
		}
		if (c == 'V') {
			decimal+=5;
			prev = 5;
		}
		if (c == 'I') {
			decimal+=1;
			prev = 1;
		}
		cout << c;
		while (cin >> c and c != '.') {
			if (c == 'M') {
				decimal+=1000;
				if (prev < 1000) {
					decimal-= 2*prev;
				}
				prev=1000;
			}
			if (c == 'D') {
				decimal+=500;
				if (prev < 500) {
					decimal-= 2*prev;
				}
				prev = 500;
			}
			if (c == 'C') {
				decimal+=100;
				if (prev < 100) {
					decimal-= 2*prev;
				}
				prev = 100;
			}
			if (c == 'L') {
				decimal+=50;
				if (prev < 50) {
					decimal-= 2*prev;
				}
				prev = 50;
			}
			if (c == 'X') {
				decimal+=10;
				if (prev < 10) {
					decimal-= 2*prev;
				}
				prev = 10;
			}
			if (c == 'V') {
				decimal+=5;
				if (prev < 5) {
					decimal-= 2*prev;
				}
				prev = 5;
			}
			if (c == 'I') {
				decimal+=1;
				if (prev < 1) {
					decimal-= 2*prev;
				}
				prev = 1;
			}
			cout << c;
		}
	cout << " = " << decimal << endl;
	}
}