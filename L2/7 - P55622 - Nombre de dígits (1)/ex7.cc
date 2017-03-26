#include <iostream>
using namespace std;

int main () {
	
	int x;
	cin >> x;
	int n = x;
	int c = 1;
	while (x > 9) {
		x = x/10;
		c++;
	}
	cout << "El nombre de digits de " << n << " es " << c << "." << endl;
}