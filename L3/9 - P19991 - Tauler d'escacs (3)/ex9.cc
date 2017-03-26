#include <iostream>
using namespace std;

int main () {
	
	int c;
	cin >> c;
	
	char num;
	int n,total;
	int diag = 0;
	int diag_inv = 0;
	int center = 0;
	
	for (int i=0;i<c;i++) {
		for (int j=0;j<c;j++) {
			cin >> num;
			n = num-48;
			if (j == i) diag = n+diag;
			if (j == c-1-i) diag_inv = n+diag_inv;
			if (j == i and j == c-1-i) center = n;
			total = diag+diag_inv-center;
			}
		}
	cout << total << endl;
}