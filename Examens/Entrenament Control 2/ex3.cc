#include <iostream>
using namespace std;

void write_binary(int n, int k) {
	if (n == 0) {
		cout << string(k,'0');
		return;
	}
	write_binary(n/2,k-1);
	cout << n%2;
	
}


int main() {
	
	int n,k;
	while (cin >> n >> k) {
		write_binary(n,k);
		cout << endl;
	}
}
