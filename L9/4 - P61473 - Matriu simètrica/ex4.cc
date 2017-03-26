#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matriu;

bool es_simetrica(const Matriu& m) {
	int n=m.size();
	for (int i=0;i<n-1;i++) {
		for (int j=i+1;j<n;j++) {
			 if (m[i][j] != m[j][i]) return false;
		}
	} 
	return true;
}

int main() {
	
	Matriu m(3,vector<int>(3));
	
	// Matriu asimetrica
	// m[0][0] = 3;
	// m[0][1] = 8;
	// m[0][2] = 1;
	// m[1][0] = 0;
	// m[1][1] = 6;
	// m[1][2] = 2;
	// m[2][0] = 4;
	// m[2][1] = 5;
	// m[2][2] = 9;
	
	// Matriu simetrica
	m[0][0] = 3;
	m[0][1] = 0;
	m[0][2] = 4;
	m[1][0] = 0;
	m[1][1] = 6;
	m[1][2] = 5;
	m[2][0] = 4;
	m[2][1] = 5;
	m[2][2] = 9;
	
	cout << es_simetrica(m) << endl;
}