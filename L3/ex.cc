#include <iostream>
using namespace std;

int main() {
	
	char c;
	while (cin >> c) {
		
		// si c es minuscula, la pasa a mayuscula 
		if (c >= 'a' and c <= 'z') c ='A'+( c-'a');
		// alt: c = c-' ';
		
		// si c es mayuscula, la pasa a minuscula
		else if (c >= 'A' and c <= 'Z') c = 'a'+(c-'A');
		// alt: c = c+' ';

		cout << c << endl;
	}
}