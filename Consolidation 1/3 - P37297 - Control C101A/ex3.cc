#include <iostream>
using namespace std;

int main () {
	
	int n;
	cin >> n;
	
	// sum n's last 3 digits
	int sum = 0;
	for (int i=0;i<3;i++) {
		sum = n%10+sum;
		n = n/10;
	}
	cout << sum << endl;
}