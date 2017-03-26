#include <iostream>
using namespace std;

int sum_prod(int n) {
	if (n == 1) return 0;
	return (n-1)*n+sum_prod(n-1);
}

int main() {
	
	int n;
	while (cin >> n) 
		cout << sum_prod(n) << endl;
}