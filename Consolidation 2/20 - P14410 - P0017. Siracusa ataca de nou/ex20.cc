#include <iostream>
#include <cmath>
using namespace std;

void convergeix(int n, int& k, int& lluny) {
	lluny = max(n,lluny);
	if (n==1) return;
	else if (n%2==0) n/=2;
	else n = 3*n+1;
	k++;
	convergeix(n,k,lluny);
}


int main() {
	
	int m,p;
	cin >> m >> p;
	int k,lluny=0,mlluny=0;
	for (int i=1;i<=m;i++) {
		k=0;
		convergeix(i,k,lluny);
		mlluny= max(mlluny,lluny);
		if (k >= p) cout << i << endl;
	}
	cout << "S'arriba a " << mlluny << "." << endl;
}