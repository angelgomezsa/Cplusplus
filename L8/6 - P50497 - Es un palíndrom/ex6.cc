#include <iostream>
#include <string>
using namespace std;

bool es_palindrom(const string& s) {
	int last = s.size()-1;
	for (int i=0;i<s.size()/2;i++) {
		if (s[i] != s[last-i]) return false;  
	}
	return true;
}

int main() {
	
	string s;
	cin >> s;
	
	cout << es_palindrom(s);
}