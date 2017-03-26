#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int n;
	cin >> n;
	
	
	int a = 0;
	int b = 0;
	int c = 0;
	for (int i=0;i<n;i++) {
		char y;
		cin >> y; 
		if (y == 'a') a++;
		if (y == 'b') b++;
		if (y == 'c') c++;
	}

	if (a >= b and a >= c) cout << "majoria de a" << endl << a << " repeticio(ns)" << endl;
	if (b > a and b >= c) cout << "majoria de b" << endl << b << " repeticio(ns)" << endl;
	if (c > a and c > b) cout << "majoria de c" << endl << c << " repeticio(ns)" << endl;
}
	
	
	