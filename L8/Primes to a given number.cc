#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	vector<bool> A(n,true);
	
	for (int i=2;i*i<=n;i++) {
		if (A[i] == true) {
			int incr = 1;
			for (int j=i*i;j<=n and true;j=i*i+incr*i,incr++) {
				A[j] = false;
			}
		}
	}
//	Output: all i such that A[i] is true.
	for (int i=2;i<n;i++) {
		if (A[i] == true) cout << i << endl;
	}

}