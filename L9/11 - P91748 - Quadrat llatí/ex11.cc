#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Fila; 
typedef vector<Fila> Quadrat;

bool es_llati(const Quadrat& q) {
    for (int i=0;i<q.size();i++) {
        Fila horz(q.size()+1,0);
        for (int j=0;j<q.size();j++) {
            if (q[i][j] > q.size() or q[i][j]==0) return false;
            ++horz[q[i][j]];
            if (horz[q[i][j]] != 1) return false;
        }
		if (i==0) {
			Fila vert(q.size()+1,0);
			for (int k=0;k<q.size();k++) {
				if (q[k][i] > q.size() or q[k][i]==0) return false;
				++vert[q[k][i]];
				if (vert[q[k][i]] != 1) return false;
			}
		}
    }
    return true;
}

int main() {
		
	int n;
	cin >> n;
	
	Quadrat q(n,Fila(n));
	
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cin >> q[i][j];
		}
	}
	cout << es_llati(q) << endl;
}