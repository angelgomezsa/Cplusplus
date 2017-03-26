#include <iostream>
#include <vector>
using namespace std;

int avalua(const vector<int>& p, int x) {
	int aval = 0;
	int grau = p.size()-1;
		for (int i=0;i<4;i++) {
		cout << p[i];
	}
	cout << endl;
	for (int i=0;i<=grau;i++) {
		aval=aval*x+p[i];
		cout << aval << endl;
	}
	return aval;
}

int main() {
	vector<int> p;
	p.push_back(-4);
	p.push_back(1);
	p.push_back(-2);
	p.push_back(3);
	
	// for (int i=0;i<4;i++) {
		// cout << p[i];
	// }
	
	int x=2;
	cout << avalua(p,x) << endl;
	
}	