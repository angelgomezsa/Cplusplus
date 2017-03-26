#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matriu;

Matriu suma(const Matriu& a, const Matriu& b) {
	// number of rows
	// size of a matrix returns the number of vectors that are within the vector (matrix)
	int nrows = a.size();
	if (nrows == 0) return Matriu(0,vector<int>(0));

	// count the size of a row, or how many columns there are
	// returns the size of the first vector within the matrix
	int ncols = a[0].size();
	if (ncols == 0) return Matriu(0,vector<int>(0));
		
	Matriu result(nrows,vector<int>(ncols));
	for (int i=0;i<nrows;i++) {
		for (int j=0;j<ncols;j++) {
			result[i][j] = a[i][j]+b[i][j];
		}
	}
	return result;
}

int main() {
	
	// Matriu a(0,vector<int>(0));
	// Matriu b(0,vector<int>(0));

	Matriu a(3,vector<int>(2));
	a[0][0] = 2;
	a[0][1] = -1;
	a[1][0] = 0;
	a[1][1] = 1;
	a[2][0] = 1;
	a[2][1] = 3;

	
	Matriu b(3,vector<int>(2));
	b[0][0] = 1;
	b[0][1] = 1;
	b[1][0] = 2;
	b[1][1] = -1;
	b[2][0] = 0;
	b[2][1] = -2;
	
	Matriu c = suma(a,b);
	if (c.size() == 0) cout << "matriz vacia" << endl;
	else {
		for (int i=0;i<3;i++) {
			for (int j=0;j<2;j++) {
				cout << c[i][j] <<' ';
			}
			cout << endl;
		}
	}
}