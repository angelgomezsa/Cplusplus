#include <iostream>
#include <string>
using namespace std;

// afegiu definicions de funcions i/o procediments en
// aquest punt, si ho estimeu convenient

// vegeu l'enunciat del problema
void encipher(const string& key) {
    string s;
	while (cin >> s) {
		for (int i=0;i<s.length();i++) {
			if (s[i] >= 'a' and s[i] <= 'z') s[i] = char(s[i]-'a'+'A');
			if (s[i] >= 'A' and s[i] <='Z') {
				int c = s[i]-'A';
				cout << key[c];
			}
		}
	}
}

int main() {
    string key; 
    cin >> key;
    encipher(key);
}