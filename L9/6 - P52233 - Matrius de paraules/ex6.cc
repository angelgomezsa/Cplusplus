#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector<string> Fila; 
typedef vector<Fila> Matriu;

int nombre_de_paraules(const Matriu& m, char c, int k) {
	int count=0;
	for (int i=0;i<m.size();i++) {
		for (int j=0;j<m[i].size();j++) {
			if (k < int(m[i][j].size()) and m[i][j][k] == c) count++;
		}
	}
	return count;
}


int main() {
	
}