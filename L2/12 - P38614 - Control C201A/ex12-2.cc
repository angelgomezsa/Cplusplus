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
		if (i%2 != 0) sum = n%10+sum;
		n = n/10;
//		if (n < 10 and i%2 != 0) sum = n+sum;
		cout << "Iter: " << i << endl;
		cout << "Num : " << n << endl;
		cout << "Suma: "<< sum << endl;
	}
	if (sum%2 == 0) cout << x << " ES TXATXI" << endl;
	else cout << x << " NO ES TXATXI" << endl;
	
}
}

