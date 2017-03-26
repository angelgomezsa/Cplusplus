#include <iostream>
#include <vector>
using namespace std;


vector<double> fusio(const vector<double>& v1, const vector<double>& v2) {
	vector<double> r;
	int i1=0,i2=0;
	while (i1 < v1.size() and i2 < v2.size()) {
		if (v1[i1] <= v2[i2]) r.push_back(v1[i1++]);
		else r.push_back(v2[i2++]);
	}
	for (;i1<v1.size();i1++) r.push_back(v1[i1]);
	for (;i2<v2.size();i2++) r.push_back(v2[i2]);
	return r;
}

void ordena_per_fusio(vector<double>& v) {
	int n=int(v.size());
	if (n <= 1) return;
	vector<double> v1,v2;
	for (int i=0;i<n;i++) 
		if (i%2==0) v1.push_back(v[i]);
		else v2.push_back(v[i]);
	ordena_per_fusio(v1);
	ordena_per_fusio(v2);
	v=fusio(v1,v2);
}

int main() {
	vector<double> v = {5.3, -4.1, 3, -2, 3, 5, 1, 2.2, 3, 4, 7, -8.3, 9};
	ordena_per_fusio(v);

	for (int i=0;i<v.size();i++) {
		if (i!=0) cout << " | ";
		cout << v[i];
	}
}