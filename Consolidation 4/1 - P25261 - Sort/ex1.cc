#include <iostream>
#include <algorithm>
using namespace std;

bool compara(int n1, int n2) {
	return n1>n2;
}


int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i=0;i<n;i++) 
			cin>>v[i];
		sort(v.begin(),v.end(),compara);
		for (int i=0;i<n;i++) {
			if (i!=0) cout << ' ';
			cout << v[i];
		}
		cout << endl;
	}
}