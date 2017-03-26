#include <iostream>
#include <vector>
using namespace std;

bool enfonsat(string &f, int j0) {
	vector<int> res;
	string fc=f;
	res.push_back(j0);
	for (int i=0;i<int(res.size());i++) {
		int j=res[i];
	
		if (j<0 or j>=fc.size()) continue;
		if (fc[j]=='.') continue;
		if (fc[j]=='V') return false;
	//	fc[j] = '.';
		res.push_back(j-1);
		res.push_back(j+1);
	}
	for (int i=0;i<int(res.size());i++) {
		int j=res[i];
		f[j] = '.';
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
		if (v[i][j]=='V') {
			v[i][j]='T';
			if (enfonsat(v[i],j)) cout << tret << ": " << "enfonsat" << endl;
			else cout << tret << ": " << "tocat" << endl;
		}
		else if (v[i][j]=='T') cout << tret << ": " << "tocat" << endl; 
		else cout << tret << ": " << "aigua" << endl;
	}
	cout << endl;
	for (int i=0;i<n;i++)
		cout << v[i] << endl;
}