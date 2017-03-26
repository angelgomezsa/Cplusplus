#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int> > Matriu;

int suma_linia(const Matriu& mat, int of, int oc, int df, int dc) { 
	int sum=0;
	while (of!=df) {
		if (of<df) {
			of++;
			sum+=mat[of][oc];
		}
		else {
			of--;
			sum+=mat[of][oc];
		}
	}
	while (oc!=dc) {
		if (oc<dc) {
			oc++;
			sum+=mat[of][oc];
		}
		else {
			oc--;
			sum+=mat[of][oc];
		}
	}
	return sum;
}

int main() {
	int n,m;
	cin >> n >> m;
	Matriu mat (n,vector<int>(m));
	for (int i=0;i<n;i++) 
		for (int j=0;j<m;j++)
			cin >> mat[i][j];
	
	int of,oc;
	cin >> of >> oc;
	int sum = mat[of][oc];
	int df,dc;
	while (cin >> df >> dc) {
		sum+=suma_linia(mat,of,oc,df,dc);
		of=df;
		oc=dc;
	}
	cout << "suma = "<<sum<<endl;
}