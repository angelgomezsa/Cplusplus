#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<double> diferencia(const vector<double>& v1, const vector<double>& v2) {
	vector<double> r;
	int i=0,j=0;
	while (i < v1.size() and j < v2.size()) {
		if (v1[i] > v2[j]) j++;
		else if (v1[i] < v2[j]) {
			if (i==0) r.push_back(v1[i]);
			else if (v1[i-1] != v1[i]) r.push_back(v1[i]);
			i++;
		}
		else {	
			i++; j++;
		}
	}
	while (i < v1.size()) {
		if (v1[i-1] != v1[i]) r.push_back(v1[i]);
		i++;
	}	
	return r;
}

int main() {
	vector<double> v1 = {1, 2, 2, 5, 5, 7};
	vector<double> v2 = {2, 3, 3, 7};
	
	vector<double> r = diferencia(v1,v2);
	for (int i=0;i<r.size();i++) {
		if (i!=0) cout << " | ";
		cout << r[i];
	}
}