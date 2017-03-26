#include <iostream>
using namespace std;

int girar(int n) {
	string p;
	cin >> p;
	if (n > 0) {	 
		n--;
		girar(n);
		cout << p << endl;
		return n;
	}
}

int main () {
	
	int n;
	cin >> n;
	
	girar(n);
	
}

