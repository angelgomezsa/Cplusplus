#include <iostream>
using namespace std;

int main () {
	
	int n;
	cin >> n;
	
	int x = n;
	if (n < 10) {
		if (n%2 == 0) cout << x << " ES TXATXI" << endl;
		else cout << x << " NO ES TXATXI" << endl;
	}
		
	else {
		int sum = 0;
		for (int i=1; n > 0; i++) {
			if (i%2 != 0) sum = n+sum;
			n = n/10;
		}
		if (sum%2 == 0) cout << x << " ES TXATXI" << endl;
		else cout << x << " NO ES TXATXI" << endl;
	}
}