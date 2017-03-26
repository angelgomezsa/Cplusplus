#include <iostream>
#include <vector>
using namespace std;


int main() {
	
	int n;
	while (cin >> n) {
		bool odd = false;
		bool even = false;
		vector<int> v(n);
		for (int i=0;i<n;i++) {
			cin >> v[i];
			if (v[i]%2!=0) odd=true;
			else even = true;
		}

		if (odd and even) cout << "si" << endl;
		else cout << "no" << endl;
	}
}	