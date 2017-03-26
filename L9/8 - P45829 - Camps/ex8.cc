#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matriu;

int main() {
	
	int rows,cols;
	while (cin >> rows >> cols) {
		Matriu camp(rows,vector<int>(cols));
	
		int count=0;
		for (int i=0;i<rows;i++) {
			for (int j=0;j<cols;j++) {
				cin >> camp[i][j];
				if (camp[i][j] != 0) {
					if (i == 0 and j == 0) count++;
					else if (i == 0) {
						if (camp[i][j-1] == 0) count++;
					}
					else if (j == 0) {
						if (camp[i-1][j] == 0) count++;
					}
					else if (camp[i-1][j] == 0 and camp[i][j-1] == 0) count++;
				}
			}
		}
		cout << count << endl;
	}
}


