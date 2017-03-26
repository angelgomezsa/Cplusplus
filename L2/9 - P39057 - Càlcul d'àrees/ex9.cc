#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
  cout.setf(ios::fixed); 
  cout.precision(6);
	
	int n;
	cin >> n;
	
	double x,y,r,ar,ac;
	for (int i;i<n;n++) {
		string f;
		cin >> f;
		if (f == "rectangle") {
			cin >> x >> y;
			ar = x*y;
			cout << ar << endl;
			
		}
		if (f == "cercle") {
			cin >> r;
			ac = M_PI*(r*r);
			cout << ac << endl;
		}
	}
}