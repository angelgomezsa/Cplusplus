#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	vector<int> v(n);
	for (int i=0;i<n;i++) 
		cin >> v[i];
	
	for (int i=n-k;i<n;i++) {
		if (i!=n-k) cout << ' ';
		cout << v[i];
	}
	cout << ' ';
	
	for (int i=0;i<n-k;i++) {
		if (i!=0) cout << ' ';
		cout <<v[i];
	}
	cout << endl;
}