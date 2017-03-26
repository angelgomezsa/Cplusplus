#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
typedef vector<char> Fila; 
typedef vector<Fila> Rectangle;

void dimensions_minimes(char c, const Rectangle& r, int& fils, int& cols) {
	int n=int(r.size());
	int m=int(r[0].size());
	int x_esq = -1;
	int y_dalt = -1;
	int x_dre=m,y_baix=n;
	
	for (int i=n-1;i>=0 and y_baix==n;i--)
	  for (int j=0;j<m and y_baix==n;j++)
	    if (r[i][j]==c) y_baix=i;
	
	for (int i=0;i<n and y_dalt==-1;i++)
	  for (int j=0;j<m and y_dalt==-1;j++)
	    if (r[i][j]==c) y_dalt=i;
	
	
	for (int j=m-1;j>=0 and x_dre==m;j--)
	  for (int i=0;i<n and x_dre==m;i++)
	    if (r[i][j]==c) x_dre=j;
	
	for (int j=0;j<m and x_esq==-1;j++)
	  for (int i=0;i<n and x_esq==-1;i++)
	    if (r[i][j]==c) x_esq=j;
  
	    
	fils = y_baix-y_dalt+1;
	cols = x_dre-x_esq+1;
}
    
int main() {
	
	int n,m;
	char c;
	cin >> n >> m >> c;
	Rectangle r(n,Fila(m));
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			cin >> r[i][j];
		}
	}

	int fils=0,cols=0;
	dimensions_minimes(c,r,fils,cols);
	cout << "The subretangle has " << fils << " rows and " << cols << " columns" << endl;
}