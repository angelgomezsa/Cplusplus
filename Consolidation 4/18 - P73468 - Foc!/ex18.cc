#include <iostream>
#include <vector>
using namespace std;

void erase(vector<vector<char> >& v,int i0,int j0,int n,int m) {
	vector<pair<int,int> > re;
	re.push_back(pair<int,int> (i0,j0));
	for (int ire=0;ire<int(re.size());ire++) {
		int i=re[ire].first;
		int j=re[ire].second;
	
		if (i<0 or j<0 or n-1<i or m-1<j) continue;
		if (v[i][j]=='.') continue;
		v[i][j]='.';
		re.push_back(pair<int,int> (i+1,j));
		re.push_back(pair<int,int> (i-1,j));
		re.push_back(pair<int,int> (i,j+1));
		re.push_back(pair<int,int> (i,j-1));
	}
}

int main() {
	int n,m;
	while (cin>>n>>m) {
		vector<vector<char> > v(n,vector<char>(m));
		for (int i =0;i<n;i++)
			for (int j=0;j<m;j++)
				cin >> v[i][j];
		
		for (int i=0;i<n;i++) 
			for (int j=0;j<m;j++) 
				if (v[i][j] == 'F') 
					erase(v,i,j,n,m);
				
		for (int i=0;i<n;i++) {
			for (int j=0;j<m;j++) 
				cout << v[i][j];
			cout << endl;
		}
		cout << endl;
	}
}	