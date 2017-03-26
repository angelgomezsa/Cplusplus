#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while (cin>>n) {
		vector<int> p;
		vector<int> s;
		while (n!=0) {
			if (n%2==0) p.push_back(n);
			else s.push_back(n);
			cin >> n;
		}
		sort (p.begin(),p.end());
		sort (s.begin(),s.end());
		for (int i=0;i<p.size();i++) {
			if (i!=0) cout << ' ';
			cout << p[i];
		}
		cout << endl;
		for (int i=s.size()-1;i>=0;i--) {
			if (i!=s.size()-1) cout << ' ';
			cout << s[i];
		}
		cout << endl;
	}
}