#include <iostream>
using namespace std;

int main () {
	
	int x;
	cin >> x;
	if (x <= 1) cout << x << endl;
	
	while (x > 1) {
		cout << x%2;
		x = x/2;
		if (x <= 1) cout << x<< endl;
		
	}

}
	