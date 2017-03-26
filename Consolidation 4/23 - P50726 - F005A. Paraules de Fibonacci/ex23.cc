#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool found(string s, vector<string> &v, int &pos) {
	v.push_back(s);
	while (v[pos] != s) pos++; 
	v.pop_back();
	if (pos == v.size()) return false;
	return true;
}

int main() {
	string fn;
	vector<string> v;
	v.push_back("a");
	v.push_back("b");
	int i=2;
	while (v[i-1].size()+v[i-2].size()<1001) {
		string fn=v[i-2];
		for (int j=0;j<v[i-1].size();j++) {
			fn.push_back(v[i-1][j]);
		}
		v.push_back(fn);
		i++;
	}
	string s;
	while (cin >> s) {
		int pos=0;
		if (found(s,v, pos)) cout << s << " es la paraula numero " << pos+1 << endl;
		else cout << s << " no es de Fibonacci" << endl;
	}
}
