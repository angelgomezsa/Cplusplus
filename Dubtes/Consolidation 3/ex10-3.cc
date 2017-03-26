#include <iostream>
#include <vector>
using namespace std;

struct Enviament { 
	string dni; 
	string exer; 
	int temps; 
	string res; 
};

struct exercici {
	string nom;
	int temps;
	string res;
};

struct alums {
	string dni;
	vector<exercici> exer;
};

typedef vector<Enviament> Historia;
typedef vector<alums> Alumnes;

void mesenviaverds(const Alumnes& classP1) {
	int maxenverd, maxexverd, maxexvermell,maxexdif, maxtemps, pos1, pos2, pos3, pos4, pos5;
	maxenverd = maxexverd = maxexvermell = maxexdif = maxtemps = pos1 = pos2 = pos3 = pos4 = pos5 = 0;
	for (int i = 0;i<int(classP1.size());i++) {
		int cverd = 0; // comptador de verds per cada alumne
		int uverd = 0; // comptador de verds unics per cada alumne
		int uvermell = 0; // comptador de vermells per cada alumne
		int countex = 0; // comptador de exercicis diferents intentats per cada alumne
		vector<string> exverd;
		vector<string> exvermell;
		vector<string> exdif;
		for (int j=0;j<int(classP1[i].exer.size());j++) {
			if (classP1[i].exer[j].res == "verd") {
				cverd++;
				
				// verds unics
				
				bool found = false;
				for (int k=0;k<int(exverd.size());k++) {
					if (classP1[i].exer[j].nom == exverd[k]) found = true;
				}
				if (not found) {
					exverd.push_back(classP1[i].exer[j].nom);
					uverd++;
				}
			}
			if (classP1[i].exer[j].res == "vermell") {
				bool found = false;
				for (int k=0;k<int(exverd.size());k++) {
					if (classP1[i].exer[j].nom == exvermell[k]) found = true;
				}
				if (not found) {
					exvermell.push_back(classP1[i].exer[j].nom);
					uvermell++;
				}
			}
			bool found = false;
			for (int k=0;k<int(exdif.size());k++) {
				if (classP1[i].exer[j].nom == exdif[k]) found = true;
			}
			if (not found) {
				exdif.push_back(classP1[i].exer[j].nom);
				countex++;
			}
			if (classP1[i].exer[j].temps > maxtemps) {
				maxtemps = classP1[i].exer[j].temps;
				pos5 = i;
			}
		}
		// verds totals
		if (cverd > maxenverd) {
			maxenverd = cverd;
			pos1 = i;
		}
		else if (cverd == maxenverd) {
			if (classP1[i].dni < classP1[pos1].dni) pos1 = i;
		}
		
		// verds unics
		
		if (uverd > maxexverd) {
			maxexverd = uverd;
			pos2 = i;
		}
		else if (uverd == maxexverd) {
			if (classP1[i].dni < classP1[pos2].dni) pos2 = i;
		}
		
		// vermells unics 
		
		if (uvermell > maxexvermell) {
			maxexvermell = uvermell;
			pos3 = i;
		}
		else if (uvermell == maxexvermell) {
			if (classP1[i].dni < classP1[pos3].dni) pos3 = i;
		}
		
		// exercicis intentats
		
		if (countex > maxexdif) {
			maxexdif = countex;
			pos4 = i;
		}
		else if (countex == maxexdif) {
			if (classP1[i].dni < classP1[pos4].dni) pos4 = i;
		}
	}
	if (maxenverd > 0) cout << "alumne amb mes enviaments verds:     " << classP1[pos1].dni << " (" << maxenverd << ')' << endl;
	else if (maxenverd == 0) cout << "alumne amb mes enviaments verds:     -" << endl;
	if (maxexverd > 0) cout << "alumne amb mes exercicis verds:      " << classP1[pos2].dni << " (" << maxexverd << ')' << endl;
	else if (maxexverd == 0) cout << "alumne amb mes exercicis verds:      -" << endl;
	if (maxexvermell > 0) cout << "alumne amb mes exercicis vermells:   " << classP1[pos3].dni << " (" << maxexvermell << ')' << endl;
	else if (maxexvermell == 0) cout << "alumne amb mes exercicis vermells:   -" << endl;
	if (maxexdif > 0) cout << "alumne amb mes exercicis intentats:  " << classP1[pos4].dni << " (" << maxexdif << ')' << endl;
	else if (maxexvermell == 0) cout << "alumne amb mes exercicis intentats:  -" << endl;
	if (maxtemps > 0) cout << "alumne que ha fet l'ultim enviament: " << classP1[pos5].dni << endl;
	else if (maxtemps == 0) cout << "alumne que ha fet l'ultim enviament: -" << endl;


}


void parse(const Historia& P1, Alumnes& classP1) {

	for (int i=0;i<int(P1.size());i++) {
		for (int j = 0;j<int(classP1.size());j++) {
			if (P1[i].dni == classP1[j].dni) {
				exercici ex;
				ex.nom = P1[i].exer;
				ex.temps = P1[i].temps;
				ex.res = P1[i].res;
				
				classP1[j].exer.push_back(ex);
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
}
