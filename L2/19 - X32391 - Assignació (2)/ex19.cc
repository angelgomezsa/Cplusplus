#include <iostream>
using namespace std;

int main () {
	
	int d,n,t;
	cin >> d >> n >> t;
	
	int paga;

	int count = 0;
	for (int i=0;i<t;i++) {
		cin >> paga;
		n = n+paga-d;
		if (n > 0) count++;
	}

	cout << count << endl;
	
}
