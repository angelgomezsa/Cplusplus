#include <iostream>
#include <vector>
using namespace std;

bool quadrat_magic(const vector< vector<int> >& t) {
	int n = t.size();
	int sumrow,sumcol;
	int sumdiag=0,suminvdiag=0;
	for (int i=0;i<t.size();i++) {
		sumrow = sumcol = 0;
		for (int j=0;j<t.size();j++) {
			if (t[i][j] < 1 or t[i][j] > n*n) return false; 
			sumrow+=t[i][j];
			sumcol+=t[j][i];
			if (i==j) {
				sumdiag+=t[i][j];
				suminvdiag+=t[i][n-1-j];
			}
		}
		if (sumrow != sumcol) return false;
	}
	if (sumdiag != suminvdiag) return false;
	return true;
}


int main() {
	vector< vector<int> > t = {
							{1, 15, 14, 4},
							{12, 6, 7, 9},
							{8, 10, 11, 5},
							{13, 3, 2, 16}
	};
	cout << quadrat_magic(t) << endl;						
}