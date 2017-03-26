#include <iostream>
#include <cmath>
using namespace std;

bool es_perfecte(int n) {
	int sum=0;
	int num=n;
	if (n == 1 or n == 0) return false;
	for (int i=2;i<=sqrt(n);i++) 
		if (n%i == 0) sum+=(n/i)+i;
	return (sum+1 == num);
}

int main() {
	
	int n;
	cin >> n;
	
	cout << es_perfecte(n);
	
}