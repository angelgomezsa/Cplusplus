#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2) {
	return (double(n1)/double(d1) < double(n2)/double(d2));
}

int main() {
	int n1,d1,n2,d2;
	cin >> n1 >> d1 >> n2 >> d2;
	
	cout << c_frac(n1,d1,n2,d2);
}