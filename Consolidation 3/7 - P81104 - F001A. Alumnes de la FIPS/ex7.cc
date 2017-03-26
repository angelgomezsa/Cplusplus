#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Assignatura { 
	string nom; // Nom de l’assignatura 
	double nota; // Entre 0 i 10, -1 indica NP 
};

struct Alumne { 
	string nom; // Nom de l’alumne 
	int dni; // DNI de l’alumne 
	vector<Assignatura> ass; // Llista d’assignatures de l’alumne 
};

double nota(const vector<Alumne>& alums, int dni, string nom) {
	for (int i=0;i<alums.size();i++) {
		if (dni == alums[i].dni) {
			for (int j=0;j<alums[i].ass.size();j++) {
				if (nom == alums[i].ass[j].nom) return alums[i].ass[j].nota;
			}
			return -1;
		}
	}
	return -1;
}

double mitjana(const vector<Assignatura>& ass) {
	double sum=0;
	int asspres=0;
	for (int i=0;i<ass.size();i++) {
		if (ass[i].nota >= 0) {
			sum+= ass[i].nota;
			asspres++;
		}
	}
	if (asspres != 0) return double(sum)/asspres; 
	return -1;
}

void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {
	int size = alums.size();
	double nota = -1;
	com = 0;
	for (int i = 0;i<size;i++) {
		if (dni == alums[i].dni) {
			for (int j=0;j<alums[i].ass.size();j++) {
				if (nom == alums[i].ass[j].nom) nota = alums[i].ass[j].nota;
			}
			
		}
		
	}
	for (int i = 0;i<size;i++) {
		double mitja = mitjana(alums[i].ass);
		if (mitja > nota) com++;
	}
}

int main() {
	int n;
	cin >> n;
	vector<Alumne> alums(n);
	for (int i=0;i<n;i++) {
		cin >> alums[i].nom >> alums[i].dni;
		int asgn;
		cin >> asgn;
		alums[i].ass = vector<Assignatura> (asgn);
		for (int j=0;j<asgn;j++) {
			cin >> alums[i].ass[j].nom >> alums[i].ass[j].nota;
		}
	}
	
	int dni;
	string nom;
	int com;
	while (cin >> dni >> nom) {
		compta(alums, dni, nom, com);
		cout << com << endl;
		
	}
}