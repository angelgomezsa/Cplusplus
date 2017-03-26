#include <iostream>
#include <vector>
using namespace std;

bool enfonsat(vector<string> &v, int i0, int j0) {
	vector<pair<int,int> > erase;
	vector<string> v2=v;
	erase.push_back(pair<int,int> (i0,j0));
	for (int ierase=0;ierase<int(erase.size());ierase++) {
		int i=erase[ierase].first;
		int j=erase[ierase].second;
	
		if (i<0 or j<0 or i>=int(v.size()) or j>=int(v[0].size())) continue;
		if (v2[i][j]=='.') continue;
		if (v2[i][j]=='V') return false;
		v2[i][j] = '.';
		erase.push_back(pair<int,int> (i,j+1));
		erase.push_back(pair<int,int> (i,j-1));
		erase.push_back(pair<int,int> (i+1,j));
		erase.push_back(pair<int,int> (i-1,j));
	}
	for (int ierase=0;ierase<int(erase.size());ierase++) {
		int i=erase[ierase].first;
		int j=erase[ierase].second;
		if (i>=0 and j>=0 and i<int(v.size()) and j<int(v[0].size())) 
			v[i][j] = '.';
	}
	return true;
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
			v[i][j]='T';
			if (enfonsat(v,i,j)) cout << tret << ": " << "enfonsat" << endl;
			else cout << tret << ": " << "tocat" << endl;
		}
		else cout << tret << ": " << "aigua" << endl;
	}
	cout << endl;
	for (int i=0;i<n;i++)
		cout << v[i] << endl;
}