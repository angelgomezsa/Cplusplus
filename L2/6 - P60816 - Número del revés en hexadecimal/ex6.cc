#include <iostream>
using namespace std;

int main () {
	
	int x;
	cin >> x;
	
	if (x <= 15) {
		if (x == 10) cout << "A";
		if (x == 11) cout << "B";
		if (x == 12) cout << "C";
		if (x == 13) cout << "D";
		if (x == 14) cout << "E";
		if (x == 15) cout << "F";
		if (x < 10) cout << x;
	}
	
	while (x > 15) {
		if (x%16 < 10) cout << x%16;
		if (x%16 == 10) cout << "A";
		if (x%16 == 11) cout << "B";
		if (x%16 == 12) cout << "C";
		if (x%16 == 13) cout << "D";
		if (x%16 == 14) cout << "E";
		if (x%16 == 15) cout << "F";
		x = x/16;
	    
		if (x <= 15) {
			if (x%16 < 10) cout << x%16;
			if (x%16 == 10) cout << "A";
			if (x%16 == 11) cout << "B";
			if (x%16 == 12) cout << "C";
			if (x%16 == 13) cout << "D";
			if (x%16 == 14) cout << "E";
			if (x%16 == 15) cout << "F";
		}
	}
	cout << endl;
}