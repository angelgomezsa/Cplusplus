#include <iostream>
using namespace std;

int main () {
	
	cout.setf(ios::fixed);
	cout.precision(10);
	
	int n,m;
	while (cin >> n >> m) {
		double Hn = 0;
		double Hm = 0;
		for (int i=1;i<=n;i++) Hn = 1./i+Hn;
		for (int j=1;j<=m;j++) Hm = 1./j+Hm;
		cout << Hn-Hm << endl;
	}
}