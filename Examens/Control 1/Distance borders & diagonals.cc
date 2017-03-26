#include <iostream>
using namespace std;

int main () {
	
	int n;
	cin >> n;
	
	for (int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			int mindist = i-1;
			if (mindist > j-1) mindist = j-1;
			if (mindist > n-i) mindist = n-i;
			if (mindist > n-j) mindist = n-j;
			
			int diag;
			if (i < j) diag = j-i;
			else diag = i-j;
			int inv_diag;
			if (i+j > n+1) inv_diag = i+j-n-1;
			else inv_diag = n+1-i-j;
			
			if (mindist > diag) mindist = diag;
			if (mindist > inv_diag) mindist = inv_diag;
			
			cout << mindist%10;
		}
	cout << endl;	
	}
}