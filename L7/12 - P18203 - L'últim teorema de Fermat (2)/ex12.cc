#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int a,b,c,d;
	int root;
	bool sol = false;
	bool nozero;
	int sol_root,sol_a,sol_c;
	while (cin >> a >> b >> c >> d) {
		if (a!=0 and c!=0) nozero = true;
		else nozero = false;
		while (not sol and not nozero) {
			int total = a*a*a+c*c*c;
			root = cbrt(total);
			if (root*root*root == total) {
				sol = true;
				sol_root = root;
				sol_a = a;
				sol_c = c;
			}
			else c++;
		}
	}
	if (sol) cout << sol_a << "^3 + " << sol_c << "^3 = " << sol_root << "^3" << endl;
	else cout << "Sense solucio!" << endl;
}