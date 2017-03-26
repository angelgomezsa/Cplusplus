#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	
	int y = c;
	int root;
	bool sol = false;
	while (a<=b and y<=d and not sol) {
		int total = a*a+y*y;
		root = sqrt(total);
		if (root*root != total) y++;
		else sol = true;
		if (y>d) {
			y = c;
			a++;
		}
	}
	if (sol) cout << a << "^2 + " << y << "^2 = " << root << "^2" << endl;
	else cout << "Sense solucio!" << endl;
}