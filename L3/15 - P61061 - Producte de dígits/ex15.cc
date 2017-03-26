#include <iostream>
using namespace std;

int main () {
	
	int n;
	
	while (cin >> n) {
		if ( n < 10) cout << "El producte dels digits de " << n << " es " << n << "." << endl;
		while (n > 9) {
			cout << "El producte dels digits de " << n << " es ";
			int num = 1;
			while (n > 0) {
				num = n%10*num;
				n = n/10;
			}
			n = num;
			cout << num << "." << endl;	
		}
		cout << "----------" << endl;
	}
}