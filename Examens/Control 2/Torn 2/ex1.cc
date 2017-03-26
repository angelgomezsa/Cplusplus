#include <iostream>
using namespace std;

int sum_odd_numbers(int n) {
	int sum=0;
	for (int i=1;i<=n;i+=2) sum+=i;
	return sum;
}


int main() {
	
	int n;
	while (cin >> n) {
		cout << sum_odd_numbers(n) << endl;
	}
}