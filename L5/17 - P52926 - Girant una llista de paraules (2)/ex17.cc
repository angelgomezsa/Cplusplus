#include <iostream>
using namespace std;

void girar() {
	string p;
	cin >> p;
	if (p != "fi") {
		girar();
		cout << p << endl;
	}
}

int main () {
	
	girar();
}