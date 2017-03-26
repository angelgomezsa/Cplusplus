#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n;
	while (cin >> n) {
		vector<int> v(n);
		int sum = 0;
		for (int i=0;i<n;i++) {
			cin >> v[i];
			sum+=v[i];
		}
		bool found = false;
		for (int i=0;i<n;i++) {
			if (v[i] == sum-v[i]) found = true;
		}
		if (found) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}