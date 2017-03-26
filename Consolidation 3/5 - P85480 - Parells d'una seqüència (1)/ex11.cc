#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n) {
	if (n == 0 or n==1) return false;
	for (int i=2;i*i<=n;i++) {
		if (n%i == 0) return false;
	}
	return true;
}

int main() {
	
	int n;
	while (cin >> n) {
		bool prime = false;
		vector<int> v(n);
		for (int i=0;i<n;i++) {
			cin >> v[i];	
		}
		for (int i=0;i<n and not prime;i++) {
			for (int j=i+1;j<n and not prime;j++) {
				if (is_prime(v[i]+v[j])) prime = true;
			}
		}
		if (prime) cout << "si" << endl;
		else cout << "no" << endl;
	} 
}