#include <iostream>
#include <vector>
using namespace std;

bool hies(string p,const vector<string>& vp) {
	int left=0;
	int right = vp.size()-1;
	while (left<=right) {
		int med = (left+right)/2;
		if (p > vp[med] ) left = med+1;
		else if (p < vp[med] ) right = med-1;
		else return true;
	}
	return false;
}

bool es_magic(vector<string> &vp, int k, vector<string> &m) {
	for (int i=0;i<k;i++) {
		if (not hies(m[i],vp)) return false;
		for (int j=0;j<k;j++) {
			if (m[i][j] != m[j][i]) return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	vector<string> vp(n);
	for (int i=0;i<n;i++) 
		cin>> vp[i];
	
	int k;
	while (cin >> k and k!=0) {
		vector<string> m(k);
		for (int i=0;i<k;i++) 
			cin>>m[i];

		if (es_magic(vp,k,m)) cout << "SI" << endl;
		else cout << "NO" << endl;
	}
}