#include <iostream>
using namespace std;

int main () {
	
	int n;
	while (cin >> n) {
	
// piramide top
	
		int pdm1 = (n-1)+n;
	
		for (int i = 0;i<n-1; i++) {
			for (int j = 0;j<pdm1+i;j++) {
				if (j < pdm1-n-i) cout << " ";
				else cout << "X";
			}
			cout << endl;
		}
	
// center

		int cntr = (n-1)*2+n;
	
		for (int i=0;i<n;i++) {
			for (int j = 0;j<cntr;j++) cout << "X";
			cout << endl;
		}

// bottom 

	
		for (int i = 0;i<n-1; i++) {
			for (int j = 0;j<cntr-i-1;j++) {
				if (j < i+1) cout << " ";
				else cout << "X";
			}
			cout << endl;
		}
	cout << endl;
	}	
}