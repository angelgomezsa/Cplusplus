#include <iostream>
#include <vector>
using namespace std;

bool is_pangram (const vector<bool> &v) {
	for (int i=0;i<v.size();i++) {
		if (v[i]==0) return false;
	}
	return true;
}


int main() {
	int abc = 'Z'-'A'+1;
	char c;
	while (cin >> c) {
		vector<bool> v(abc,0);
		while (c!='.') {
			if (c>='a' and c<='z') {
				int pos = c-'a';
				v[pos]=1;
			}
			if (c>='A' and c<='Z') {
				int pos = c-'A';
				v[pos]=1;
			}
			cin >> c;
		}
		if (is_pangram(v)) cout << "SI" << endl;
		else cout << "NO" << endl;
	}
}