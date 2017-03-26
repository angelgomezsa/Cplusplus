#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int a,b;
	while (cin >> a >> b) {
	
	int x = a;
	int y = b;
	
	int c = 0;
	for (a;a<=b;a++) {
		c = pow(a,3) + c;
	}
	
	cout << "suma dels cubs entre " << x << " i " << y << ": " << c << endl;
	}
}