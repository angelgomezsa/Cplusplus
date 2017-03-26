#include <iostream>
#include <vector>
using namespace std;

string sortida(int p, vector<int>& v) {
	vector<bool> vist (v.size(),0);
	while (p>=0 and p<v.size()) {
		if (vist[p] == 1) return "mai";
		vist[p]=1;
		p+=v[p];
	}
	if (p<0) return "esquerra";
	if (p>=v.size()) return "dreta";
}

int main() {
	
}