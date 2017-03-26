#include <iostream>
#include <string>
using namespace std;

// add here function or procedure definitions if needed


// see the problem statement
void make_uppercase_lowercase(const string& T) {
    string s,r;
	while (cin >> s) {
		for (int i=0;i<int(s.length());i++) {
			if (s[i] >= 'a' and s[i] <= 'z') {
				int c = s[i]-'a';
				char u = s[i]-'a'+'A';
				if (T[c] == 'U') r.push_back(u);
				else r.push_back(s[i]);
			}
			else if (s[i] >='A' and s[i] <= 'Z') {
				int c = s[i]-'A';
				char l = s[i]-'A'+'a';
				if (T[c] == 'L') r.push_back(l);
				else r.push_back(s[i]);
			}
		}
	}
	cout << r << endl;
}

int main() {
    string T; 
    cin >> T;
    make_uppercase_lowercase(T);
}