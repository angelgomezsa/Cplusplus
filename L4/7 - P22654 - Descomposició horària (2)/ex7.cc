#include <iostream>
using namespace std;

void descompon(int n, int& h, int& m, int& s) {
	s = n%60;
	int min = n/60;
	m = min%60;
	h = min/60;
}

int main () {
	
	int n,h,m,s;
	cin >> n;
	
	descompon(n,h,m,s);
	cout << h << " " << m << " " << s << endl;
}