#include <iostream>
using namespace std;

int main () {
	
	cout.setf(ios::fixed); 
	cout.precision(4);
	
	int x;
	cin >> x;
	double n = 0;
	for (int i = 1;i<=x;i++) {
		n = 1./i + n;
	}
	cout << n << endl;

}