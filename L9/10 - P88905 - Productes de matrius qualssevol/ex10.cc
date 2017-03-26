#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {
	int n = a.size();
	int m = a[0].size();
	int p = b[0].size();
	
	// the resulting matrix will have n rows and p columns
	Matriu c(n,vector<int>(p));
	
	for (int i=0;i<n;i++) {
		for (int j=0;j<p;j++) {
			// we advance to the right (Matrix.A) and down (Matrix.B) with 'k'
			// 'i' designates the row of Matrix A and 'j' desinates the column of Matrix B 
			int sum=0;
			for (int k=0;k<m;k++) {
				sum+= a[i][k]*b[k][j];
			}
			c[i][j] = sum;
		}
	}
	return c;
}

int main() {
	
	Matriu a(2,vector<int>(3));
	a[0][0] = 2;
	a[0][1] = -3;
	a[0][2] = 5;
	a[1][0] = 4;
	a[1][1] = 1;
	a[1][2] = 6;
	
	Matriu b(3,vector<int>(2));
	b[0][0] = 4;
	b[0][1] = 6;
	b[1][0] = 1;
	b[1][1] = -3;
	b[2][0] = 2;
	b[2][1] = 5;
	cout << "Matriu A: " << endl;
	for (int i=0;i<2;i++) {
		for (int j=0;j<3;j++) {
			cout << a[i][j] <<' ';
		}
		cout << endl;
	}
	
	cout <<  endl;
	cout << "Matriu B:"<< endl;
	for (int i=0;i<3;i++) {
		for (int j=0;j<2;j++) {
			cout << b[i][j] <<' ';
		}
		cout << endl;
	}	
	
	Matriu c = producte(a,b);
	
	cout <<  endl;
	cout << "Producte de Matriu A x Matriu B:"<< endl;
	for (int i=0;i<2;i++) {
		for (int j=0;j<2;j++) {
			cout << c[i][j] <<' ';
		}
		cout << endl;
	}

}