#include <iostream>
#include <vector>
using namespace std;

struct Provincia { 
	string nom; 
	string capital; 
	int habitants; 
	int area; 
	double pib; 
};

struct Pais { 
	string nom; 
	string capital; 
	vector<Provincia> provs; 
};

typedef vector<Pais> Paisos;

double pib(const Paisos& p, char c, double d) {
	double sum = 0;
	for (int i=0;i<p.size();i++) {
		if (p[i].nom[0] == c) {
			for (int j=0;j<p[i].provs.size();j++) {
				if (double(p[i].provs[j].habitants)/p[i].provs[j].area > d) sum+=p[i].provs[j].pib;
			}
		}
	}
	return sum;
}

int main() {

	Paisos p(3);
	vector<Provincia> provs(3);
	
	for (int i=0;i<p.size();i++) {
		cout << "Nom del pais " << i << endl;
		cin>> p[i].nom;
		p[i].provs = vector<Provincia>(3);
		for (int j=0;j<provs.size();j++) {
			cout << "Habitants de provincia " << j << endl;
			cin >> p[i].provs[j].habitants;
			cout << "Area de provincia " << j << endl;
			cin >> p[i].provs[j].area;
			cout << "PIB de provincia " << j << endl;
			cin >> p[i].provs[j].pib;
		}
	}			
	cout << endl;
	cout << "Nom del Pais 0: " << p[0].nom << endl;
	cout << "PIB de la provincia 0 del pais 0: " << provs[0].pib << endl;
}

