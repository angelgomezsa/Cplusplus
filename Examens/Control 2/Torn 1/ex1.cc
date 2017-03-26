#include <iostream>
using namespace std;

int sum_prod(int n) {
	int sum = 0;
	for (int i=2;i<=n;i++) {
		sum+= (i-1)*i;
	}
	return sum;
}

int main() {
	
	int n;
	while (cin >> n) 
		cout << sum_prod(n) << endl;
}