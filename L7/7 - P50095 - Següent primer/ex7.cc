#include <iostream>
using namespace std;

bool es_primer(int n) {
	bool prime = true;
	if (n == 1 or n == 0) prime = false;
	int div = 2;
	while (div*div <= n and prime) {
		if (n%div == 0) prime = false;
		else div++;
	}
	return prime;
}


int main() {
	
	int n;
	while (cin >> n and es_primer(n)) {
		bool prime = false;
		while (not prime) {
			n++;
			prime = es_primer(n);
		}
		cout << n << endl;
		
	}
}