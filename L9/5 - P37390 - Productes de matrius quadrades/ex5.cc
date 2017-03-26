#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matriu;


Matriu producte(const Matriu& a, const Matriu& b) {
	int n = a.size();
	
	Matriu c(n,vector<int>(n));
	
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			int sum=0;
			for (int k=0;k<n;k++) {
				sum+=a[i][k]*b[k][j];
			}
			c[i][j] = sum;
		}
	}
	return c;
}

int main() {
	
}