#include <iostream>
#include <vector>
using namespace std;

bool detecta(vector<string> &v, int i, int j, int n, int m) {
	if (i >=0 and i<n and j>=0 and j<m) 
		if  (v[i][j] == 'B') return true;
	return false;
}

int veins(vector<string> &v, int i, int j, int n, int m) {
	int sum=0;
	if (detecta(v,i-1,j,n,m)) sum++; 
	if (detecta(v,i-1,j+1,n,m)) sum++; 
	if (detecta(v,i,j+1,n,m)) sum++; 
	if (detecta(v,i+1,j+1,n,m)) sum++; 
	if (detecta(v,i+1,j,n,m)) sum++; 
	if (detecta(v,i+1,j-1,n,m)) sum++; 
	if (detecta(v,i,j-1,n,m)) sum++; 
	if (detecta(v,i-1,j-1,n,m)) sum++; 
	return sum;
}

int main() {
	int n,m;
	cin>>n>>m;
	vector<string> v(n,string(m,' '));
	for (int i=0;i<n;i++) 
		for (int j=0;j<m;j++)
			cin>>v[i][j];	
	vector<vector<string> > w;
	w.push_back(v);
	int pos_i;
	bool found = false;
	while (not found) {
		vector<vector<int> > uns(n,vector<int> (m,0));
		for (int i=0;i<n;i++) 
			for (int j=0;j<m;j++) {
				if  (v[i][j] == '.') {
					int bacteries=veins(v,i,j,n,m);
					if (bacteries == 3) uns[i][j]=1;
				}
				if  (v[i][j] == 'B') {
					int bacteries=veins(v,i,j,n,m);
					if (bacteries == 2 or bacteries == 3) uns[i][j]=1;
				}
			}
		for (int i=0;i<n;i++) 
			for (int j=0;j<m;j++) {
				if  (uns[i][j] == 1) v[i][j]='B';
				else v[i][j]='.';
			}
		w.push_back(v);
		for (int i=0;i<int(w.size())-1;i++)
			if (w.back()==w[i]) {
				pos_i=i;
				found=true;
			}
	}
	for (int i=pos_i;i<int(w.size())-1;i++) {
		if (i!=pos_i) cout << endl;
		for (int j=0;j<n;j++)
			cout << w[i][j] << endl;
	}
}