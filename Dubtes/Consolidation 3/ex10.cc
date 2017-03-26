#include <iostream>
#include <vector>
using namespace std;

struct Enviament { 
	string dni; 
	string exer; 
	int temps; 
	string res; 
};


struct alums {
	string dni;
	int verdstot = 0;
	int verdsunic = 0;
	int vermells = 0;
	int intents = 0;
};


typedef vector<Enviament> Historia;
typedef vector<alums> Alumnes;

void mesenviaverds(const Alumnes& classP1) {
	int maxverd = 0;
	int pos = 0;
	for (int i = 0;i<int(classP1.size());i++) {
		if (classP1[i].verdstot > maxverd) {
			maxverd = classP1[i].verdstot;
			pos = i;
		}
		else if (classP1[i].verdstot == maxverd) {
			if (classP1[i].dni < classP1[pos].dni) {
				pos = i;
			}
		}
	}
	if (maxverd > 0) cout << "alumne amb mes enviaments verds:     " << classP1[pos].dni << " (" << maxverd << ')' << endl;
	else cout << "alumne amb mes enviaments verds:     -" << endl;
}


void parse(const Historia& P1, Alumnes& classP1) {

	for (int i=0;i<int(P1.size());i++) {
		for (int j = 0;j<int(classP1.size());j++) {
			if (P1[i].dni == classP1[j].dni) {
				// numero total de verdes
				if (P1[i].res == "verd") classP1[j].verdstot++; 
				// numero de ejercicios con verdes
				if 
			}
		}
	}
}



int main() {
	int n;
	cin >> n;
	Historia P1(n);
	Alumnes classP1;
	for (int i = 0;i<n;i++) {
		cin >> P1[i].dni >> P1[i].exer >> P1[i].temps >> P1[i].res;
		bool found = false;
		for (int j=0;j<int(classP1.size());j++) {
			if (P1[i].dni == classP1[j].dni) found = true;
		}
		if (not found) {
			alums alumne;
			alumne.dni = P1[i].dni;
			classP1.push_back(alumne);
		}
	}
	
	parse(P1,classP1);
	
	mesenviaverds(classP1);
	
	
/* 	cout << "Lista de DNI diferentes:" << endl;
	for (int i=0;i<int(classP1.size());i++) {
		cout << classP1[i].dni << endl;
	} */
}
