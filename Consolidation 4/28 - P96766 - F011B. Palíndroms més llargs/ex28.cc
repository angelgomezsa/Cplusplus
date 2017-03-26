#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

bool es_palindrom(string s) {
	int right = s.length()-1;
	for (int left=0;left<right;left++,right--) {
		if (s[left] != s[right]) return false;
	}
	return true;
}

int main() {
	int n;
	cout << string(5,'-') << endl;
	while (cin >> n and n != 0) {
		string s;
		int p_length = 0;
		vector<string> pal;
		for (int i=0;i<n;i++) {
			cin >> s;
			if (es_palindrom(s)) {
				pal.push_back(s);
				p_length = max(p_length,int(s.length()));
			}
		}
		if (int(pal.size()) == 0) cout << "cap palindrom" << endl;
		for (int i=0;i<pal.size();i++) {
			if (pal[i].size() >= p_length) cout << pal[i] << endl;
		}
		cout << string(5,'-') << endl;
	}
}