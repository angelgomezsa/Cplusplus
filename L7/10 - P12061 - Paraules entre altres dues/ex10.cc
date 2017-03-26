#include <iostream>
using namespace std;

int main() {
	
	string p;
	int c=0;
	bool principi = false;
	bool final = false;
	while (cin >> p and not final) {
		if (p == "final") final = true;
		if (principi and not final) c++;
		if (p == "principi") principi = true;
	}
	
	if (not principi or not final) cout << "sequencia incorrecta" << endl;
	else cout << c << endl;
}