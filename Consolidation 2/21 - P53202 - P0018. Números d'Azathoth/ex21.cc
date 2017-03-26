#include <iostream>
#include <cmath>
using namespace std;

int base2(int n,int u) {
	if (n<=1) return pow(10,u)*n;
	int b2 = base2(n/2,u+1);
	return b2+pow(10,u)*(n%2);
}

void escriu_binari(int n) {
	if (n == 0) return;
	escriu_binari(n/50);
	cout << base2(n%50,0) << ".";
}

int main() {
	
	int n;
	while (cin >> n) {
		if (n == 0) cout << "0 = .0." << endl;
		else {
			cout << n << " = .";
			escriu_binari(n);
			cout << endl;
		}
	}
}
