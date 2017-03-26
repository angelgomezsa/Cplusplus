#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int> > Mat;
typedef vector<Mat> Cub;

Cub readcube(int n) {
	Cub c(n,Mat(n,vector<int> (n)));
	for (int k=0;k<n;k++) 
		for (int i=0;i<n;i++) 
			for (int j=0;j<n;j++)
				cin >> c[k][i][j];
	return c;		
}

bool ratlla(Cub &cube, vector<vector<vector<bool> > > &uns, int k, int i, int j, int dk, int di,int dj, int n) {
	if (k+dk >=n or i+di>=n or j+dj>=n) return false;
	if (cube[k][i][j]==cube[k+dk][i+di][j+dj] and (uns[k][i][j]==0 or uns[k+dk][i+di][j+dj]==0)) {
		uns[k][i][j]==1;
		uns[k+dk][i+di][j+dj]==1;
		return true;
	}
	return false;
}

int detecta(Cub &cube, vector<vector<vector<bool> > > &uns, int k, int i, int j, int n) {
	int r=0;
	if (ratlla(cube,uns,k,i,j,0,0,1,n)) r++;
	if (ratlla(cube,uns,k,i,j,0,1,1,n)) r++;
	if (ratlla(cube,uns,k,i,j,0,1,0,n)) r++;
	if (ratlla(cube,uns,k,i,j,0,1,-1,n)) r++;
	if (ratlla(cube,uns,k,i,j,1,0,0,n)) r++;
	if (ratlla(cube,uns,k,i,j,1,0,1,n)) r++;
	if (ratlla(cube,uns,k,i,j,1,1,1,n)) r++;
	if (ratlla(cube,uns,k,i,j,1,1,0,n)) r++;
	if (ratlla(cube,uns,k,i,j,1,1,-1,n)) r++;
	if (ratlla(cube,uns,k,i,j,1,0,-1,n)) r++;
	if (ratlla(cube,uns,k,i,j,1,-1,-1,n)) r++;
	if (ratlla(cube,uns,k,i,j,1,-1,0,n)) r++;
	if (ratlla(cube,uns,k,i,j,1,-1,1,n)) r++;
	cout << "detecta rallas = " << r << endl;
	return r;
	
}

int main() {
	int n;
	while (cin>>n) {
		Cub cube=readcube(n);
		vector<vector<vector<bool> > > uns(n,vector<vector<bool> > (n,vector<bool> (n,false)));
		int r=0;
		cout << "nosense" << endl;
		
		for (int k=0;k<n;k++) 
			for (int i=0;i<n;i++) 
				for (int j=0;j<n;j++)
					r+=detecta(cube,uns,k,i,j,n);
		cout << "Ratlles de mida " << n << ": " << r << endl; 
	} 
}