#include <iostream>
#include <vector>
using namespace std;

bool enfonsat(vector<string> &v,int i,int j,int di,int dj)
{
	int n=int(v.size());
	int m=int(v[0].size());
	while (0<=i and i<n and 0<=j and j<m and v[i][j]!='.') {
		if (v[i][j]=='V') return false;
		i+=di; j+=dj;
	}
	return true;
}

void enfonsa(vector<string> &v,int i,int j,int di,int dj)
{
	int n=int(v.size());
	int m=int(v[0].size());
	while (0<=i and i<n and 0<=j and j<m and v[i][j]!='.') {
		v[i][j]='.';
		i+=di; j+=dj;
	}
}

bool enfonsat(vector<string> &v,int i,int j)
{
	v[i][j]='T';
	bool enf=enfonsat(v,i,j,0,1) and
			 enfonsat(v,i,j,0,-1);
	if (enf) {
		enfonsa(v,i,j,0,1);
		enfonsa(v,i,j,0,-1);
	}
	return enf;
}

void coordenada(string &tret, int &i, int &j) {
	i=int(tret[i]-'a');
	for (int i=1;i<tret.size();i++) 
		j=j*10+int(tret[i]-'0');
}

int main() {
	int n,m;
	cin >> n >> m;
	vector<string> v(n);
	for (int i=0;i<n;i++)
		cin >> v[i];
	
	string tret;
	while (cin >> tret) {
		int i=0,j=0;
		coordenada(tret,i,j);
		if (v[i][j]=='V' or v[i][j]=='T') {
		//	v[i][j]='T';
			if (enfonsat(v,i,j)) cout << tret << ": " << "enfonsat" << endl;
			else cout << tret << ": " << "tocat" << endl;
		}
		else cout << tret << ": " << "aigua" << endl;
	}
	cout << endl;
	for (int i=0;i<n;i++)
		cout << v[i] << endl;
}