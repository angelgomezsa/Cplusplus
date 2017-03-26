#include <iostream>
#include <vector>
using namespace std;

void decipher(string trad, string &s) {
	for (int i=0;i<s.length();i++) {
		if (s[i]=='_') cout << ' ';
		else for (int j=0;j<trad.length();j++) {
			if (s[i]==trad[j]) cout << char('a'+j);
		}
	}	
}

int main() {
	string trad;
	while (cin >> trad) {
		int n;
		cin >> n;
		string s;
		for (int i=0;i<n;i++) {
			cin >> s;
			decipher(trad,s);
			cout << endl;
		}
		cout << endl;
	}
}