#include <iostream>
#include <vector>
using namespace std;


void ordena_per_seleccio(vector<double>& v, int m) {
	if (m==-1) return;
	int imax=0;
	for (int i=1;i<=m;i++) {
		if (v[imax] < v[i]) imax=i;
		swap(v[imax],v[m]);
	}
	ordena_per_seleccio(v,m-1);
}

int main() {
	int m;
	cin >> m;
	vector<double> v = {5.3, -4.1, 3, -2, 3, 5, 1, 2.2, 3, 4, 7, 8, 9};
	ordena_per_seleccio(v,m);
	
	for (int i=0;i<m;i++) {
		cout << v[i] << ' ';
	}
}
