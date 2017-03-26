#include <iostream>
#include <vector>
using namespace std;

void gira(vector<vector<char> > &t,vector<pair<int,int> > &r, char p, int &negres, int &blanques) {
	for (int k=0;k<int(r.size());k++) {
		int i=r[k].first;
		int j=r[k].second;
		t[i][j]=p;
	}
	if (p=='N') {
		negres+=int(r.size());
		blanques-=int(r.size());
	}
	else {
		negres-=int(r.size());
		blanques+=int(r.size());
	}
}

void fitxa(vector<vector<char> > &t, int n, char p, int y, int x, int di, int dj, int &negres, int &blanques) {
	if (y+di<n and x+dj<n and y+di>=0 and x+dj>=0) {
		if (t[y+di][x+dj]==p) return;
		vector<pair<int,int> > r;
		while (y+di<n and x+dj<n and y+di>=0 and x+dj>=0) {
			if (t[y+di][x+dj]=='.') return;
			if (t[y+di][x+dj]==p) {
				gira(t,r,p,negres,blanques);
				return;
			}
			r.push_back(pair<int,int> (y+di,x+dj));
			if (di==1) y++;
			if (di==-1) y--;
			if (dj==1) x++;
			if (dj==-1) x--;
		}
	}
}

void detecta(vector<vector<char> > &t, int n, char p, int y, int x, int &negres, int &blanques) {
	fitxa(t,n,p,y,x,0,1,negres,blanques); 
	fitxa(t,n,p,y,x,1,1,negres,blanques); 
	fitxa(t,n,p,y,x,1,0,negres,blanques); 
	fitxa(t,n,p,y,x,1,-1,negres,blanques); 
	fitxa(t,n,p,y,x,0,-1,negres,blanques); 
	fitxa(t,n,p,y,x,-1,-1,negres,blanques); 
	fitxa(t,n,p,y,x,-1,0,negres,blanques);
	fitxa(t,n,p,y,x,-1,1,negres,blanques); 
}

void escriutauler(vector<vector<char> > &t, int negres, int blanques) {
	for (int i=0;i<int(t.size());i++) {
		for (int j=0;j<int(t.size());j++)
			cout << t[i][j];
		cout << endl;
	}
	cout << negres <<':'<< blanques << endl;
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	vector<vector<char> > t(n,vector<char> (n,'.'));
	t[n/2][n/2]='B';
	t[n/2][n/2-1]='N';
	t[n/2-1][n/2]='N';
	t[n/2-1][n/2-1]='B';
	int negres=2,blanques=2;
	escriutauler(t,negres,blanques);
	  
	char p;
	int y,x;
	while (cin >> p >> y >> x) {
		t[y-1][x-1]=p;
		if (p=='N') negres++;
		else blanques++;
		detecta(t,n,p,y-1,x-1,negres,blanques);
		escriutauler(t,negres,blanques);
	}
}