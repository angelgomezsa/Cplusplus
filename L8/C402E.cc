#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	
	int n,p,k;
	char dir;
	
	cin >> n >> p >> k >> dir;
	vector<string> paraules(n);
	
	for (int i=0;i<n;i++) {
		cin >> paraules[i];
	}
	
	if (dir == 'd') {
		p++;
		bool first = true;
		for (int i=0;i<k;i++,p++) {
			if (p > n-1) p = 0;
			if (first) {
				cout << paraules[p];
				first = false;
			}
			else cout << ' ' << paraules[p];
		}
	} 
	
	else {
		p--;
		bool first = true;
		for (int i=0;i<k;i++,p--) {
			if (p < 0) p = n-1;
			if (first) {
				cout << paraules[p];
				first = false;
			}
			else cout << ' ' << paraules[p];
		}
	}
	cout << endl;
}