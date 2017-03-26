#include <iostream>
#include <cmath>
using namespace std;

int digits(int n) {
	if (n <10) return 1;
	return 1+digits(n/10);
}

bool es_capicua(int n) {
	bool capicua = true;
	int dgts = digits(n);
	int d,p;
	d = p = dgts/2;
	for (int i=0;i<d and capicua;i++,p--,dgts--) {
		int pwr1 = pow(10,dgts-1);
		int pwr2 = pow(10,d-p);
		capicua = (n/pwr1%10 == n/pwr2%10);
	} 
	return capicua;
}


int main() {
	int n;
	while (cin >> n)
	cout << es_capicua(n) << endl;
}
