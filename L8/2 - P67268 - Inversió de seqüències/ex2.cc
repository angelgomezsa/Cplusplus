#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n;
	while (cin >> n) {
		if (n >0 ) {
			vector<int> S(n);
			for (int i=0;i<n;i++) {
				cin >> S[i];
			}
			cout << S[n-1];
			
			for (int i=n-2;i>=0;i--) {
				cout << ' ' << S[i];
			}
		}
		cout << endl;
	}
}