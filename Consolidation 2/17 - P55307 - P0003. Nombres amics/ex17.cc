#include <iostream>
#include <cmath>
using namespace std;

int suma_divisors(int a) {
	// we only need to iterate to the sqrt of the given number
	// ex divs of 24 are: int(sqrt(24)) = 4 ::: 2 and 24/2, 3 and 24/3, 4 and 24/4
	// we start from 2 as we want to exclude the number itself
	// and add 1
	int sum=0;
	for (int i=2;i<=sqrt(a);i++) {
		if (a%i == 0)
			sum = i+(a/i)+sum;
		}
	return sum+1;	
}

bool son_amics(int a, int b) {
	if (a != b and suma_divisors(a) == b and suma_divisors(b) == a) return true;
	else return false;
}

int main() {

	int a,b;
	bool first = true;
	while (cin >> a >> b) {
		if (first and son_amics(a,b)) {
			cout << "(" << a << " " << b << ")";
			first = false;
		}
		else if (son_amics(a,b)) cout << ",(" << a << " " << b << ")";
	}
	cout << endl;
}