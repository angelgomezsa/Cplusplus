#include <iostream>
using namespace std;

int main () {
	
	char a,b;
	cin >> a >> b;
	
	if (a == b) cout << "-" << endl;
	
	if (a == 'A') {
        if (b == 'P') cout << 1 << endl;
		else if (b == 'V') cout << 2 << endl;
	}
	if (a == 'P') {
        if (b == 'V') cout << 1 << endl;
		else if (b == 'A') cout << 2 << endl;
	}
	if (a == 'V') {
        if (b == 'A') cout << 1 << endl;
		else if (b == 'P') cout << 2 << endl;
	}
}