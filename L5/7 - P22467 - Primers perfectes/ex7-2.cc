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

int sumdigits(int n) {
	if (n < 10) return n;
	else return sumdigits(n/10+n%10);
}

bool es_primer_perfecte(int n) {
	if (n < 10 and es_primer(n)) return true;
	else if (n < 10) return false;
	else return es_primer(n) and es_primer_perfecte(sumdigits(n));
}

int main () {
	
	int n;
	cin >> n;
	
	cout << "Suma digits: " << sumdigits(n) << endl;
	cout << "Es primer?: " << es_primer(n) << endl;
	cout << "Es primer perfecte?: " << es_primer_perfecte(n) << endl;
}