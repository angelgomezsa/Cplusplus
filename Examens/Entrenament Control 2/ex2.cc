#include <iostream>
using namespace std;

char atbash(char c){
	if (c >= 'a' and c<= 'z') c = c-' ';
	if (c >= 'A' and c<= 'Z') return 'Z'-(c+25-'Z');
}

void print_atbash_encipherment() {
	char c;
	while (cin >> c and c != '#') {
		if ((c >='A' and c<='Z') or (c>= 'a' and c<='z')) cout << atbash(c);
	}
	cout << '#' << endl;
}

int main() {
	
	print_atbash_encipherment();
}
