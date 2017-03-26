#include <iostream>
using namespace std;

char codificat(char c, int k) {
	if (c >= 'a' and c <= 'z') {
		int incr = k%26;
		int codi = c+incr;
		while (codi > 'z') { 
			codi = codi-'z'+96;
		}
		return codi-32;
	}
	if (c == '_') return ' ';
	else return c;
}

int main() {
	
	int k;
	while (cin >> k) {
		char c;
		while (cin >> c and c != '.') {
			cout << codificat(c,k);
		}
		cout << endl;
	}
}