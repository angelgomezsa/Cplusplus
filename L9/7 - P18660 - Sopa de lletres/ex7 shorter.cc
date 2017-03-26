#include <iostream>
#include <vector>

using namespace std;

bool hies(string &p,vector<string> &v,int ii,int jj,int di,int dj) {
	int n=int(v.size());
	int m=int(v[0].size());
	int mida=int(p.size());
	if (ii+di*mida>n or jj+dj*mida>m) return false;
	for (int k=0;k<mida;k++)
		if (p[k]!=v[ii+di*k][jj+dj*k]) return false;
	return true;
}

void posauns(vector<vector<int> > &uns,int ii,int jj,int di,int dj,int mida) {
	for (int k=0;k<mida;k++)
		uns[ii+di*k][jj+dj*k]=1;
}

void detecta(string &p,vector<string> &v,vector<vector<int> > &uns) {
	int n=int(v.size());
	int m=int(v[0].size());
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
		//vertical
		if (hies(p,v,i,j,1,0))
			posauns(uns,i,j,1,0,int(p.size()));
		// horizontal
        if (hies(p,v,i,j,0,1))
			posauns(uns,i,j,0,1,int(p.size()));
		// diagonal
		if (hies(p,v,i,j,1,1))
			posauns(uns,i,j,1,1,int(p.size()));
		}
	}
}

int main() {
	int k,n,m;
	bool primer=true;
	while (cin>>k>>n>>m) {
		if (not primer) cout<<endl;
		primer=false;
		vector<string> vp(k);
		for (int i=0;i<k;i++)
			cin>>vp[i];
		vector<string> v(n,string(m,' '));
		for (int i=0;i<n;i++) 
			for (int j=0;j<m;j++)
				cin>>v[i][j];
			
			
		vector<vector<int> > uns(n,vector<int> (m,0));
		for (int i=0;i<k;i++)
			detecta(vp[i],v,uns);
		for (int i=0;i<n;i++) {
			for (int j=0;j<m;j++) {
				if (j>0) cout<<" ";
				if (uns[i][j]) cout<<char(v[i][j]-'a'+'A');
				else cout<<v[i][j];
			}
			cout<<endl;
		}
	}
}