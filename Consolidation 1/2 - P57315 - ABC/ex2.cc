#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int x,y,z;
	cin >> x >> y >> z;
	char a,b,c;
	cin >> a >> b >> c;
	
	int maxim,minim,med;
	
	maxim = max(x,(max(y,z)));
	minim = min(x,(min(y,z)));
	
	// calculate medium term
	if ((x > y and x < z) or (x > z and x < y)) med = x;
		else if ((y > x and y < z) or (y > z and y < x)) med = y;
			else med = z;
	
	int p,q,r;
	
	if (a == 'A') p = minim;
	else if (a == 'B') p = med;
		else p = maxim;
	
	if (b == 'A') q = minim;
	else if (b == 'B') q = med;
		else q = maxim;

	if (c == 'A') r = minim;
	else if (c == 'B') r = med;
		else r = maxim;
	
	cout << p << " " << q << " " << r << endl;
}