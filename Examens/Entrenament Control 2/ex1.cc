#include <iostream>
using namespace std;

int two_to_n(int n) {
	if (n==0) return 1;
	return 2*two_to_n(n-1);
}


int main() {
	
	int n;
	while (cin >> n) {
		cout << two_to_n(n) << endl;
	}
}
