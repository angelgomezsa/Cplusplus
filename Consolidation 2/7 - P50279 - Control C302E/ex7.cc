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
	bool seqT = false;
	bool seqA = false;
	bool seqG = false;
	while (cin >> c) {
		if (seqT and seqA and seqG) cout << complement(c);
		else {
			if (seqT and seqA and c != 'G') {
				seqT = false;
				seqA = false;
				seqG = false;
			}
			else if (seqT and seqA and c == 'G') seqG = true;
			}
			if (seqT and not seqA and c != 'A') {
				seqT = false;
				seqA = false;
			}
			else if (seqT and not seqA and c == 'A') seqA = true; 
			if (c == 'T' and not seqT) seqT=true;
	}
	cout << endl;
}