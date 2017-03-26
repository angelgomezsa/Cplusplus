#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<double> interseccio(const vector<double>& v1, const vector<double>& v2) {
	vector<double> r;
	int i1=0,i2=0;
	while (i1 < v1.size() and i2 < v2.size()) {
		if (v1[i1] > v2[i2]) i2++;
		else if (v1[i1] < v2[i2]) i1++;
		else {
			if (i1==0 or v1[i1-1] != v1[i1]) r.push_back(v1[i1]);
			i1++; i2++;
		}
	}
  return r;
}

int main() {
	vector<double> v1 = {1, 2, 2, 5, 5, 7};
	vector<double> v2 = {2, 3, 3, 7};
	
	vector<double> r = interseccio(v1,v2);
	for (int i=0;i<r.size();i++) {
		if (i!=0) cout << " | ";
		cout << r[i];
	}
}