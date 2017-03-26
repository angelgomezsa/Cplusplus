#include <iostream>
using namespace std;

void girar() {
	string p;
	if (cin >> p) {
		girar();
		cout << p << endl;
	}
}

int main () {
	
	girar();
}