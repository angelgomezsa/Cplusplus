#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void calcula_posicions(const vector<double> &v, int &p, int &q) {
	double maxim=v[0];
	double maxesq=maxim;
	for (int i=1;i<v.size();i++) 
		if (v[i] > maxim) {
			maxim=v[i];
			p=i;
		}
	for (int i=0;i<p;i++) 
		if (v[i] > maxesq) {
			maxesq=v[i];
			q=i;
		}
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);
	
	int n;
	while (cin >> n) {
		vector<double> v(n);
		for (int i=0;i<n;i++) 
			cin >> v[i];
	
		int p=0,q=0;
		calcula_posicions(v,p,q);
		double mitjana=0;
		for (int i=q;i<=p;i++)
			mitjana+=v[i];
		
		cout << mitjana/(p-q+1) << endl;
	}
}