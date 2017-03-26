#include <iostream>
using namespace std;

int main () {
	
	int as,ap,n;
	cin >> as >> ap >> n;
	
	int i;
	int count = 1;
	while (cin >> i) {
		if (count%2 == 0) {
			n = n+ap-i;
		}
		else {
			n = n+as-i;
		}
		count++;
		cout << n << endl;
	}
}