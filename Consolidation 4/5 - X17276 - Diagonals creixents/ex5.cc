#include <iostream>
#include <vector>
using namespace std;

bool diagonals_creixents(const vector<vector<int> >& matrix,int n, int m,int i,int j) {
	int elem = matrix[i][j];
	for (int i2=i-1,j2=j-1;i2>=0 and j2>=0;i2--,j2--) {
		if (elem >= matrix[i2][j2]) return false;
		elem = matrix[i2][j2];
	}
	elem = matrix[i][j];
	for (int i2=i-1,j2=j+1;i2>=0 and j2<m;i2--,j2++) {
		if (elem >= matrix[i2][j2]) return false;
		elem = matrix[i2][j2];
	}
	elem = matrix[i][j];
	for (int i2=i+1,j2=j-1;i2<n and j2>=0;i2++,j2--) {
		if (elem >= matrix[i2][j2]) return false;
		elem = matrix[i2][j2];
	}	
	elem = matrix[i][j];
	for (int i2=i+1,j2=j+1;i2<n and j2<m;i2++,j2++) {
		if (elem >= matrix[i2][j2]) return false;
		elem = matrix[i2][j2];
	}
	return true;
}

int main() {
	int n,m;
	while (cin >> n >> m) {
		vector<vector<int> > matrix(n,vector<int> (m));
		for (int i=0;i<n;i++) 
			for (int j=0;j<m;j++) 
				cin >> matrix[i][j];
		int i,j;
		cin >> i >> j;
		if (diagonals_creixents(matrix,n,m,i,j)) cout << "si" << endl;
		else cout << "no" << endl;
	}
}
	
