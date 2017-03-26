#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,m;
	cin >> n;
	vector<int> v;
	bool first = true;
	for (int i=0;i<n;i++) {
		cin >> m;
		if (m < 0) { 
			if (first) { 
				cout << m;
				first = false;
			}
			else cout << ' ' << m;
		}
		if (m > 0) v.push_back(m);
	}
	for (int i=0;i<v.size();i++) {
		cout << ' ' << v[i];
	}
	cout << endl;
}