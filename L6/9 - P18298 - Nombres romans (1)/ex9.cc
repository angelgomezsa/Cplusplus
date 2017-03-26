#include <iostream>
using namespace std;


int main () {

	int n;
	while (cin >> n) {
	 
	cout << n << " = "; 
	
	// milers
	if (n > 999) {
		if (n/1000 == 1) cout << "M";	
		if (n/1000 == 2) cout << "MM";
		if (n/1000 == 3) cout << "MMM";
	}
	
	n%=1000;
	
	//centenes
	if (n > 99) {
		if (n/100 == 1) cout << "C";	
		if (n/100 == 2) cout << "CC";
		if (n/100 == 3) cout << "CCC";
		if (n/100 == 4) cout << "CD";
		if (n/100 == 5) cout << "D";
		if (n/100 == 6) cout << "DC";
		if (n/100 == 7) cout << "DCC";
		if (n/100 == 8) cout << "DCCC";
		if (n/100 == 9) cout << "CM";
	}
	
	n%=100;
	
	// desenes
	if (n>9) {
		if (n/10 == 1) cout << "X";	
		if (n/10 == 2) cout << "XX";
		if (n/10 == 3) cout << "XXX";
		if (n/10 == 4) cout << "XL";
		if (n/10 == 5) cout << "L";
		if (n/10 == 6) cout << "LX";
		if (n/10 == 7) cout << "LXX";
		if (n/10 == 8) cout << "LXXX";
		if (n/10 == 9) cout << "XC";
	}
	
	n%=10;
	
	// unitats
	if (n>0) {
		if (n%10 == 1) cout << "I";	
		if (n%10 == 2) cout << "II";
		if (n%10 == 3) cout << "III";
		if (n%10 == 4) cout << "IV";
		if (n%10 == 5) cout << "V";
		if (n%10 == 6) cout << "VI";
		if (n%10 == 7) cout << "VII";
		if (n%10 == 8) cout << "VIII";
		if (n%10 == 9) cout << "IX";
	}
	cout << endl;
	}
}