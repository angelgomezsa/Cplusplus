#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matriu;

void transposa(Matriu& m) {
	int n = m.size();
	
	for (int i=0;i<n-1;i++) {
		for (int j=i+1;j<n;j++) {
			swap(m[i][j],m[j][i]);
		}
	}
}



int main() {
	
	Matriu m(3,vector<int>(3));
	m[0][0] = 3;
	m[0][1] = 8;
	m[0][2] = 1;
	m[1][0] = 0;
	m[1][1] = 6;
	m[1][2] = 2;
	m[2][0] = 4;
	m[2][1] = 5;
	m[2][2] = 9;

	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			cout << m[i][j] <<' ';
		}
		cout << endl;
	}
	cout << endl;
	cout << "Matriu transposa:" << endl;
	cout << endl;
	transposa(m);
	
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			cout << m[i][j] <<' ';
		}
		cout << endl;
	}
	
}
