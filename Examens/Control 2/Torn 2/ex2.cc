#include <iostream>
using namespace std;

int sum_odd_numbers(int n) {
	if (n < 0) return 0;
	return n+sum_odd_numbers(n-2);
}


int main() {
	
	int n;
	while (cin >> n) {
		cout << sum_odd_numbers(n) << endl;
	}
}