#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
	// declares a vector with size v1+v2	
	vector<int> conc(v1.size()+v2.size());
	int pos=0;
	// insert vector v1 into the 0 ~ v1.size-1 positions of vector conc 
	for (int i=0;i<v1.size();i++,pos++) {
		conc[pos] = v1[i];
	}
	// insert vector v2 into the v1.size ~ v2.size-1 positions of vector conc
	for (int i=0;i < v2.size();i++,pos++) {
		conc[pos] = v2[i];
	}
	return conc;
}

int main() {

	
}
