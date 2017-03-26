#include <iostream>
using namespace std;

int main () {
	
	int a,b;
	cin >> a >> b;
	
	int x = a;
	int y = b;
	if (x > y) swap(x,y);
	int r;
	
	while (x%y > 0) {
	r = x%y;
	x = y;
	y = r;
	}
	cout << "El mcd de "<< a << " i " << b << " es " << r << "." << endl;
}
	 