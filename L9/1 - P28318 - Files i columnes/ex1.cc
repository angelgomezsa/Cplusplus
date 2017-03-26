#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> row;
typedef vector<row> matrix;

int main() {
	
	int n,m;
	cin >> n >> m;
	
	matrix matrix(n,row(m));

	for (int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin >> matrix[i][j];	
		}
	}

	string p;
	int x,y;
	while (cin >> p) {
		if (p == "fila") {
			cin >> x;
			cout << p << ' ' << x <<':';
			for (int j=0;j<m;j++) 
				cout << ' ' << matrix[x-1][j];
			cout << endl;
		}
		else if (p == "columna") {
			cin >> y;
			cout << p << ' ' << y <<':';
			for (int i=0;i<n;i++)
				cout << ' ' << matrix[i][y-1];
			cout << endl;
		}
		else {
			cin >> x >> y;
			cout << p << ' ' << x << ' ' << y << ':';
			cout << ' ' << matrix[x-1][y-1] << endl;
		}
	}
	
}