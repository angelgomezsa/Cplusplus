#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) { 
	cout << s << "('" << c << "') = "; 
	if (b) cout << "cert" << endl; 
	else cout << "fals" << endl; 
}

int main () {
	
	char c;
	string s;
	bool b;
	cin >> c;
	
	// es una lletra?
	if ((c > 64 and c < 91) or (c > 96 and c < 123)) {
		s = "lletra";
		b = true;
		escriu_linia(c,s,b);
		
		// es una vocal o una consonant?
		if (c == 65 or c == 69 or c == 73 or c == 79 or c == 85 or c == 97 or c == 101 or c == 105 or c == 111 or c == 117) {
			s = "vocal";
			b = true;
			escriu_linia(c,s,b);
			s = "consonant";
			b = false;
			escriu_linia(c,s,b);
		}
		else {
			s = "vocal";
			b = false;
			escriu_linia(c,s,b);
			s = "consonant";
			b = true;
			escriu_linia(c,s,b);
		}
		
		// es majuscula o minuscula?
		if (c > 64 and c < 91) {
			s = "majuscula";
			b = true;
			escriu_linia(c,s,b);
			s = "minuscula";
			b = false;
			escriu_linia(c,s,b);
		}
		else {	
			s = "majuscula";
			b = false;
			escriu_linia(c,s,b);
			s = "minuscula";
			b = true;
			escriu_linia(c,s,b);			
		}
		s = "digit";
		b = false;
		escriu_linia(c,s,b);
	}
//	es un digit?
	else if (c > 47 and c < 58) {
		s = "lletra";
		b = false;
		escriu_linia(c,s,b);
		s = "vocal";
		escriu_linia(c,s,b);
		s = "consonant";
		escriu_linia(c,s,b);
		s = "majuscula";
		escriu_linia(c,s,b);
		s = "minuscula";
		escriu_linia(c,s,b);
		s = "digit";
		b = true;
		escriu_linia(c,s,b);
			
	}
	
	else {
		s = "lletra";
		b = false;
		escriu_linia(c,s,b);
		s = "vocal";
		escriu_linia(c,s,b);
		s = "consonant";
		escriu_linia(c,s,b);
		s = "majuscula";
		escriu_linia(c,s,b);
		s = "minuscula";
		escriu_linia(c,s,b);
		s = "digit";
		escriu_linia(c,s,b);
	}
}