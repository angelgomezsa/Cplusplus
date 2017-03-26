#include <iostream>
using namespace std;

int sum_digits_squared(int n) {
	if (n == 0) return 0;
	int sum = sum_digits_squared(n/10);
	int digit = n%10;
	return digit*digit+sum; 
}



bool is_happy(int n) {
	if (n==1) return true;
	else if (n==4) return false;
	else is_happy(sum_digits_squared(n));
}


int main() {
	
	int n;
	int happy=0,sad=0;
	while (cin >> n) {
		if (is_happy(n)) {
			cout << n << " is a happy number" << endl;
			happy++;
		}
		else {
			cout << n << " is a sad number" << endl;
			sad++;
		}
	}
	cout << endl;
	cout << "happy numbers: " << happy << endl;
	cout << "sad numbers: " << sad << endl;	
}