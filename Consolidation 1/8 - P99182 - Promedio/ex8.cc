#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int x,y;
	cin >> x >> y;
	
	double dif,promed;
	if (x > y) swap(x,y);
	dif = (y-x)/2.;
	promed = x+dif;
	cout << promed << endl;
}

