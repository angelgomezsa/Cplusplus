#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	cout.setf(ios::fixed);
	cout.precision(4);
	
	int a,b,k;
	while (cin >> a >> b >> k) {
		double sum = 0;
		for (int i=0;a+i*k<=b;i++) {
			sum+= 1.0/(a+i*k);
		}
		cout << sum << endl;
	}
}