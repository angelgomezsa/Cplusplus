#include <iostream>
using namespace std;

int main () {
	
	char n;
	cin >> n;
	
	if (n > 47 and n < 58) cout << "digit" << endl;
	else if ((n > 64 and n < 91) or (n > 96 and n < 123)) cout << "lletra" << endl;
		else cout << "res" << endl;
}