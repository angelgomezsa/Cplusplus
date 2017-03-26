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
	cin >> n;
	
	int num;
	for (int i=0;i<n;i++) {
		cin >> num;
		if (es_primer(num)) cout << num << " es primer" << endl;
		else cout << num << " no es primer" << endl;
	}
}