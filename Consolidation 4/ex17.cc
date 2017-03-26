#include <iostream>
#include <vector>
using namespace std;

void fitxa(vector<vector<char> > &t, int n, char p, int y, int x, int di, int dj, int &negres, int &blanques) {
	for (int i=y+di,j=x+dj;;i+=di,j+=dj)
		if (i<0 or n<=i or j<0 or n<=j or t[i][j]=='.')
			return;
		else if (t[i][j]==p) break;
	for (int i=y+di,j=x+dj;t[i][j]!=p;i+=di,j+=dj) {
		t[i][j]=p;
		if (p=='N') {
			negres++;
			blanques--;
		}
		else {
			negres--;
			blanques++;
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