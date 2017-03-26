#include <iostream>
using namespace std;

char complement(char c) {
	if (c == 'A') c = 'T';
	else if (c == 'C') c = 'G';
	else if (c == 'G') c = 'C';
	else if (c == 'T') c = 'A';
	return c;
}

int main() {
	
	char c;
	bool TAG = false;
	while (cin >> c) {
		if (TAG) cout << complement(c);
		if (c == 'T') {
			if (cin >> c and c == 'A') {
				if (cin >> c and c == 'G') TAG = true;
			}
		}
	}
}