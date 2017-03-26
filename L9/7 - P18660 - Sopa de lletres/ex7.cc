#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector<char> Fila;
typedef vector<Fila> Matriu;


int main() {
	
	int names,rows,cols;
	bool first = true;
	while (cin >> names >> rows >> cols) {
		if (first) first = false;
		else cout << endl;
		vector<string> vnames(names);
		for (int i=0;i<names;i++) {
			cin >> vnames[i];
		}
		
		Matriu sopa(rows,Fila(cols));
		
		for (int i=0;i<rows;i++) {
			for (int j=0;j<cols;j++) {
				cin >> sopa[i][j];
			}
		}
		
		// check letters
		for (int i=0;i<rows;i++) {
			for (int j=0;j<cols;j++) {
				// check if the letter in i,j is the first letter of one of the names
				for (int fln=0;fln<names;fln++) {
				// if the letter is the same as the first of one of the names
				// and the name can fit in the remaining columns/rows
					if (sopa[i][j] == vnames[fln][0] or sopa[i][j] == vnames[fln][0]-'a'+'A') {
						int nlength = vnames[fln].size();
						//  check the rest of the letters
						
						
						// DIAGONAL
						
						if (cols-j >= nlength and rows-i >= nlength) {
							int h=i+1,k=j+1,c=1; // c = pos of the letter in the name 
							bool samename = true;
							while (samename and c < nlength) {
								samename = (sopa[h][k] == vnames[fln][c] or sopa[h][k] == vnames[fln][c]-'a'+'A');
								h++,k++,c++;
							}
							if (samename) {
								h=i,k=j;
								for (k;k<j+nlength;k++,h++) {
									if (sopa[h][k] >= 'a' and sopa[h][k] <= 'z' ) sopa[h][k] = sopa[h][k]-'a'+'A';
								}
							}
						}
						
						
						// HORIZONTAL

						
						if (cols-j >= nlength) {
							int k=j+1,c=1; // c = pos of the letter in the name 
							bool samename = true;
							while (samename and c < nlength) {
								samename = (sopa[i][k] == vnames[fln][c] or sopa[i][k] == vnames[fln][c]-'a'+'A');
								k++;
								c++;
							}
							if (samename) {
								k = j;
								for (k;k<j+nlength;k++) {
									if (sopa[i][k] >= 'a' and sopa[i][k] <= 'z' ) sopa[i][k] = sopa[i][k]-'a'+'A';
								}
							}
						}
						

						/// VERTICAL
						
						if (rows-i >= nlength) {
							int h=i+1,c=1;
							bool samename = true;
							while (samename and c < nlength) {
								samename = (sopa[h][j] == vnames[fln][c] or sopa[h][i] == vnames[fln][c]-'a'+'A');
								h++;
								c++;
							}
							if (samename) {
								h = i;
								for (h;h<i+nlength;h++) {
									if (sopa[h][j] >= 'a' and sopa[h][j] <= 'z') sopa[h][j] = sopa[h][j] -'a'+'A';
								}
							}
						}
					}
				}
			}						
		}	
		
		
		for (int i=0;i<rows;i++) {
			bool flr = true; // first letter in the row?
			for (int j=0;j<cols;j++) {
				if (flr) {
					cout << sopa[i][j];
					flr = false;
				}
				else cout << ' ' << sopa[i][j];
			}
			cout << endl;
		}
	}
}
