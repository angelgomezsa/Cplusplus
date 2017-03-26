#include <iostream>
#include <vector>
using namespace std;

int posicio_maxim(const vector<double>& v, int m) {
	int pos=0;
	double maxim = v[0];
	for (int i=1;i<=m;i++) 
		if (v[i] > maxim) {
			pos = i;
			maxim = v[i];
		}
	return pos;	
}

int main() {
	
	
}